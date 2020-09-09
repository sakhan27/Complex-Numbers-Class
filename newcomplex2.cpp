//Project 1 Task 3 -
//Name - Sohaib Ali Khan, StarID - vi4362xq
//Instructor - Dr. Jie Meichsner
//Due Date - 7/2/2020

/* Description - Using operator overloading to redo Task2, using friend function
to define input output operator overloading and non-member functions for all other
arithmetic operator overloading.
*/


//Implementation of newcomplex1.h and description of functions

#include <iostream>
#include "newcomplex2.h"
#include <string>
#include <math.h>


using namespace std;

Complex::Complex(float initial_x, float initial_y)
{
	x = initial_x;
	y = initial_y;

}

void Complex::set_x(float a)
{
	x = a;
}

void Complex::set_y(float b)
{
	y = b;
}

istream& operator >> (istream& strm, Complex& obj)
{
	strm >> obj.x >> obj.y;

	return strm;
}

ostream& operator << (ostream& strm, Complex& obj)
{
	//Condition to check if y3 is negative so we can print the correct arithmetic operator sign
	float y3 = 0.0;
	if (obj.get_y() < 0) {
		y3 = obj.get_y() * -1;
		strm << obj.get_x() << " - " << y3 << "i";
	}
	else {
		strm << obj.get_x() << " + " << obj.get_y() << "i";
	}

	return strm; 
}

Complex operator +(const Complex& c1, const Complex& c2)
{
	float x3, y3;

	// Compute the x3 and y3 of the sum
	x3 = (c1.get_x() + c2.get_x());
	y3 = (c1.get_y() + c2.get_y());

	Complex sum(x3, y3);
	return sum;
}

Complex operator -(const Complex& c1, const Complex& c2)
{
	float x3, y3;

	// Compute the x3 and y3 of the difference
	x3 = (c1.get_x() - c2.get_x());
	y3 = (c1.get_y() - c2.get_y());


	Complex diff(x3, y3);
	return diff;
}

Complex operator *(const Complex& c1, const Complex& c2)
{
	float x3, y3;

	// Compute the x3 and y3 of the product
	x3 = (c1.get_x() * c2.get_x()) - (c1.get_y() * c2.get_y());
	y3 = (c1.get_x() * c2.get_y()) + (c1.get_y() * c2.get_x());


	Complex prod(x3, y3);
	return prod;
}


Complex operator /(const Complex& c1, const Complex& c2)
{
	float x3, y3;
	
	// Compute the x3 and y3 of the division
	x3 = ((c1.get_x() * c2.get_x()) + (c1.get_y() * c2.get_y())) / ((c2.get_x() * c2.get_x()) + (c2.get_y() * c2.get_y()));
	y3 = ((c1.get_y() * c2.get_x()) - (c1.get_x() * c2.get_y())) / ((c2.get_x() * c2.get_x()) + (c2.get_y() * c2.get_y()));

	//Rounding x3 and y3 to 2 decimal places
	x3 = roundf(x3 * 100) / 100;
	y3 = roundf(y3 * 100) / 100;

	Complex quot(x3, y3);
	return quot;
}