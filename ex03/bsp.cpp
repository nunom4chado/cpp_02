/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:33:38 by numartin          #+#    #+#             */
/*   Updated: 2023/10/04 16:00:20 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// https://www.geeksforgeeks.org/check-whether-a-given-point-lies-inside-a-triangle-or-not/

float area(Point const a, Point const b, Point const c)
{
    float x1 = a.getX().toFloat();
    float y1 = a.getY().toFloat();
    float x2 = b.getX().toFloat();
    float y2 = b.getY().toFloat();
    float x3 = c.getX().toFloat();
    float y3 = c.getY().toFloat();

    float area = (x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0;
    if (area >= 0.0f)
        return area;
    return area * -1;
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    /* Calculate area of triangle ABC */
    float A = area (a, b, c);

    /* Calculate area of triangle PointBC */ 
    float A1 = area (point, b, c);

    /* Calculate area of triangle PointAC */ 
    float A2 = area (point, a, c);

    /* Calculate area of triangle PointAB */  
    float A3 = area (point, a, b);

    /* Check if sum of A1, A2 and A3 is same as A */
    return (A == A1 + A2 + A3);
}