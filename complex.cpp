//Project 1 Task 1 -
//Name - Sohaib Ali Khan, StarID - vi4362xq
//Instructor - Dr. Jie Meichsner
//Due Date - 7/2/2020


//Implementation of complex.h


#include <iostream>
#include "complex.h"

using namespace std;

Complex::Complex(int initial_x, int initial_y)
{
        x = initial_x;
        y = initial_y;
}

void Complex:: set_x(int a)
{
        x = a;
}

void Complex::set_y(int b)
{
        y = b;
}

void Complex::displayComplexNumber(Complex c1, Complex c2)
{
        cout << "The two complex numbers are: " << endl;
        cout << "Complex number1: " << c1.get_x() << " + " << c1.get_y() << "i" << endl;
        cout << "Complex number2: " << c2.get_x() << " + " << c2.get_y() << "i" << endl;
}

