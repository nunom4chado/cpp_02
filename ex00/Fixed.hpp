/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:03:45 by numartin          #+#    #+#             */
/*   Updated: 2023/09/29 11:34:17 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

class Fixed {
    public:
        Fixed( void ); // canonical
        Fixed( Fixed const & src ); // canonical
        ~Fixed( void ); // canonical

        Fixed & operator=( Fixed const & rhs ); // canonical

        int getRawBits( void ) const;
        void setRawBits( int const raw );

    private:
        int _fixed_point;
        static const int _fractional_bits;

};

#endif