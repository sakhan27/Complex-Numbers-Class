//Project 1 Task 3 -
//Name - Sohaib Ali Khan, StarID - vi4362xq
//Instructor - Dr. Jie Meichsner
//Due Date - 7/2/2020

/* Description - Using operator overloading to redo Task2, using friend function 
to define input output operator overloading and non-member functions for all other
arithmetic operator overloading. 
*/


#include <iostream>
#include <string>
#ifndef NEWCOMPLEX2_H
#define NEWCOMPLEX2_H

using namespace std;


//Complex class declaration and function declarations
class Complex
{
private:

	float x;
	float y;

public:

	Complex(float initial_x = 0.0, float initial_y = 0.0);

	//setters
	void set_x(float);
	void set_y(float);

	//getters
	float get_x() const { return x; }
	float get_y() const { return y; }

	//Friend functions for input and output operator overloading declaration
	friend istream& operator >> (istream &strm, Complex &obj);
	friend ostream& operator << (ostream &strm, Complex &obj);
};

//Arithmetic operator overload functions declarations
Complex operator +(const Complex& c1, const Complex& c2);
Complex operator -(const Complex& c1, const Complex& c2);
Complex operator *(const Complex& c1, const Complex& c2);
Complex operator /(const Complex& c1, const Complex& c2);

#endif