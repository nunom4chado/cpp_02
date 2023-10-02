/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:19:17 by numartin          #+#    #+#             */
/*   Updated: 2023/10/02 16:24:15 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fractional_bits = 8;

Fixed::Fixed( void ): _fixed_point(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed( int const n ) {
    std::cout << "Int constructor called" << std::endl;
    setRawBits(intToFixed(n));
}

Fixed::Fixed( float const n ) {
    std::cout << "Float constructor called" << std::endl;
    setRawBits(floatToFixed(n));
}

Fixed::~Fixed( void ) {
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=( Fixed const & rhs ) {
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &rhs)
        this->_fixed_point = rhs.getRawBits();

    return *this;
}

int Fixed::getRawBits( void ) const {
    return this->_fixed_point;
}

void Fixed::setRawBits( int const raw ) {
    this->_fixed_point = raw;
}

// https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
float Fixed::toFloat( void ) const {
    return (float)this->_fixed_point / (float)(1 << this->_fractional_bits);
}

int Fixed::toInt( void ) const {
    return this->_fixed_point >> this->_fractional_bits;
}

int Fixed::intToFixed( int const n ) const {
    return n << this->_fractional_bits;
}

// https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
int Fixed::floatToFixed( float const n ) const {
    return (int)(roundf(n * (1 << this->_fractional_bits)));
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
    o << i.toFloat();
    return o;
}