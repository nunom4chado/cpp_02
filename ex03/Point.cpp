/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:57:38 by numartin          #+#    #+#             */
/*   Updated: 2023/10/05 11:16:15 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

/* -------------------------------------------------------------------------- */
/*                           Public Member Functions                          */
/* -------------------------------------------------------------------------- */

/* -------------------------------- Canonical ------------------------------- */

Point::Point( void ): _x(0), _y(0) {
    // std::cout << "Default constructer called" << std::endl;
}

Point::~Point( void ) {
    // std::cout << "Destructer called" << std::endl;
}

Point::Point( Point const & src ) {
    // std::cout << "Copy constructer called" << std::endl;
    *this = src;
}

Point & Point::operator=( Point const & rhs ) {
    // std::cout << "Copy assigment operator overload called" << std::endl;
    if (this != &rhs) {
        this->_x = rhs.getX();
        this->_y = rhs.getY();
    }

    return *this;
}

/* ----------------------------- Other functions ---------------------------- */
Point::Point( Fixed const x, Fixed const y ): _x(x), _y(y) {
    // std::cout << "Parametric constructer called" << std::endl;
}

Fixed Point::getY( void ) const {
    return this->_y;
}

Fixed Point::getX( void ) const {
    return this->_x;
}