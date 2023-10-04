/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:35:32 by numartin          #+#    #+#             */
/*   Updated: 2023/10/04 11:50:00 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;

    // Fixed const c = 30;
    // Fixed d = 20;
    // Fixed e = 18;
    // Fixed const f = 32;
    // Fixed g = -18;

    // std::cout << Fixed::max( c, b ) << std::endl;
    // std::cout << Fixed::max( d, e ) << std::endl;
    // std::cout << Fixed::min( d, e ) << std::endl;
    // std::cout << Fixed::max( d, f ) << std::endl;

    // std::cout << Fixed::max( e, g ) << std::endl;
    // std::cout << Fixed::min( e, g ) << std::endl;
    
    return 0;
}
