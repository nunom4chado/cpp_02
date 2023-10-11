/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:35:32 by numartin          #+#    #+#             */
/*   Updated: 2023/10/11 11:04:01 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {


    // Point a(Fixed(0), Fixed(0));
    // Point b(Fixed(10.28f), Fixed(30.12f));
    // b = a;
    // std::cout << "[Point A] x: " << a.getX() << " y: " << a.getY() << std::endl;
    // std::cout << "[Point B] x: " << b.getX() << " y: " << b.getY() << std::endl;



    std::cout << std::endl;
    
    // Inside
    Point a(Fixed(0), Fixed(0));
    Point b(Fixed(10.28f), Fixed(30.12f));
    Point c(Fixed(20.78f), Fixed(0));
    Point point(Fixed(10.63f), Fixed(15.14f));

    std::cout << "      B(10.28,30.12)          " << std::endl;
    std::cout << "           / \\               " << std::endl;
    std::cout << "          /   \\              " << std::endl;
    std::cout << "         /     \\             " << std::endl;
    std::cout << "        /   P   \\            " << std::endl;
    std::cout << "       /         \\           " << std::endl;
    std::cout << "A(0,0) ----------- C(20.78,0) " << std::endl;

    std::cout << std::endl;

    std::cout << "[Point A] x: " << a.getX() << " y: " << a.getY() << std::endl;
    std::cout << "[Point B] x: " << b.getX() << " y: " << b.getY() << std::endl;
    std::cout << "[Point C] x: " << c.getX() << " y: " << c.getY() << std::endl;
    std::cout << "[Point Point] x: " << point.getX() << " y: " << point.getY() << std::endl;
    std::cout << "Is Point inside? " << std::boolalpha << bsp(a, b, c, point) << std::endl;

    std::cout << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << std::endl;

    // Outside
    Point a2(Fixed(0), Fixed(0));
    Point b2(Fixed(10.28f), Fixed(30.12f));
    Point c2(Fixed(20.78f), Fixed(0));
    Point point2(Fixed(30.63f), Fixed(15.14f));

    std::cout << "      B(10.28,30.12)          " << std::endl;
    std::cout << "           / \\               " << std::endl;
    std::cout << "          /   \\              " << std::endl;
    std::cout << "         /     \\             " << std::endl;
    std::cout << "        /       \\          P " << std::endl;
    std::cout << "       /         \\           " << std::endl;
    std::cout << "A(0,0) ----------- C(20.78,0) " << std::endl;

    std::cout << std::endl;

    std::cout << "[Point A] x: " << a2.getX() << " y: " << a2.getY() << std::endl;
    std::cout << "[Point B] x: " << b2.getX() << " y: " << b2.getY() << std::endl;
    std::cout << "[Point C] x: " << c2.getX() << " y: " << c2.getY() << std::endl;
    std::cout << "[Point Point] x: " << point2.getX() << " y: " << point2.getY() << std::endl;
    std::cout << "Is Point inside? " << std::boolalpha << bsp(a2, b2, c2, point2) << std::endl;

    std::cout << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << std::endl;

    // Outside
    Point a3(Fixed(0), Fixed(0));
    Point b3(Fixed(10), Fixed(30));
    Point c3(Fixed(20), Fixed(0));
    Point point3(Fixed(10), Fixed(0));

    std::cout << "         B(10,30)          " << std::endl;
    std::cout << "           / \\            " << std::endl;
    std::cout << "          /   \\           " << std::endl;
    std::cout << "         /     \\          " << std::endl;
    std::cout << "        /       \\         " << std::endl;
    std::cout << "       /         \\        " << std::endl;
    std::cout << "A(0,0) -----P----- C(20,0) " << std::endl;

    std::cout << std::endl;

    std::cout << "[Point A] x: " << a3.getX() << " y: " << a3.getY() << std::endl;
    std::cout << "[Point B] x: " << b3.getX() << " y: " << b3.getY() << std::endl;
    std::cout << "[Point C] x: " << c3.getX() << " y: " << c3.getY() << std::endl;
    std::cout << "[Point Point] x: " << point3.getX() << " y: " << point3.getY() << std::endl;
    std::cout << "Is Point inside? " << std::boolalpha << bsp(a3, b3, c3, point3) << std::endl;

    std::cout << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << std::endl;

    // Outside
    Point a4(Fixed(0), Fixed(0));
    Point b4(Fixed(10), Fixed(30));
    Point c4(Fixed(20), Fixed(0));
    Point point4(Fixed(10), Fixed(0.01f));

    std::cout << "         B(10,30)          " << std::endl;
    std::cout << "           / \\            " << std::endl;
    std::cout << "          /   \\           " << std::endl;
    std::cout << "         /     \\          " << std::endl;
    std::cout << "        /       \\         " << std::endl;
    std::cout << "       /         \\        " << std::endl;
    std::cout << "A(0,0) -----P----- C(20,0) " << std::endl;

    std::cout << std::endl;

    std::cout << "[Point A] x: " << a4.getX() << " y: " << a4.getY() << std::endl;
    std::cout << "[Point B] x: " << b4.getX() << " y: " << b4.getY() << std::endl;
    std::cout << "[Point C] x: " << c4.getX() << " y: " << c4.getY() << std::endl;
    std::cout << "[Point Point] x: " << point4.getX() << " y: " << point4.getY() << std::endl;
    std::cout << "Is Point inside? " << std::boolalpha << bsp(a4, b4, c4, point4) << std::endl;

    std::cout << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << std::endl;

    // Outside
    Point a5(Fixed(0), Fixed(0));
    Point b5(Fixed(10), Fixed(30));
    Point c5(Fixed(20), Fixed(0));
    Point point5(Fixed(10), Fixed(30));

    std::cout << "         B(10,30) && P     " << std::endl;
    std::cout << "           / \\            " << std::endl;
    std::cout << "          /   \\           " << std::endl;
    std::cout << "         /     \\          " << std::endl;
    std::cout << "        /       \\         " << std::endl;
    std::cout << "       /         \\        " << std::endl;
    std::cout << "A(0,0) ----------- C(20,0) " << std::endl;

    std::cout << std::endl;

    std::cout << "[Point A] x: " << a5.getX() << " y: " << a5.getY() << std::endl;
    std::cout << "[Point B] x: " << b5.getX() << " y: " << b5.getY() << std::endl;
    std::cout << "[Point C] x: " << c5.getX() << " y: " << c5.getY() << std::endl;
    std::cout << "[Point Point] x: " << point5.getX() << " y: " << point5.getY() << std::endl;
    std::cout << "Is Point inside? " << std::boolalpha << bsp(a5, b5, c5, point5) << std::endl;

    return 0;
}
