/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:54:02 by numartin          #+#    #+#             */
/*   Updated: 2023/10/05 11:19:06 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_CLASS_H
# define POINT_CLASS_H

#include "Fixed.hpp"

class Point {
    public:
        // Canonical
        Point( void );
        ~Point( void );
        Point( Point const & src );
        Point & operator=( Point const & rhs );

        Point( Fixed const x, Fixed const y );

        Fixed getY( void ) const;
        Fixed getX( void ) const;

    private:
        Fixed _x;
        Fixed _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif