/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:03:45 by numartin          #+#    #+#             */
/*   Updated: 2023/10/02 16:23:33 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>

class Fixed {
    public:
        Fixed( void ); // canonical
        Fixed( int const n );
        Fixed( float const n );
        Fixed( Fixed const & src ); // canonical
        ~Fixed( void ); // canonical

        Fixed & operator=( Fixed const & rhs ); // canonical

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        int intToFixed( int const n ) const;
        int floatToFixed( float const n ) const;

    private:
        int _fixed_point;
        static const int _fractional_bits;

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif