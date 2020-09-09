//Project 1 Task 2 -
//Name - Sohaib Ali Khan, StarID - vi4362xq
//Instructor - Dr. Jie Meichsner
//Due Date - 7/2/2020


/*
Add the following non member functions in your complex header file and implementation file 
following the example of modified point class in the file newpoint.h and newpoint.cpp
A function that return the sum of two complex numbers
A function that returns the difference of two complex numbers
A function that returns the product of two complex numbers
A function that returns the quotient of two complex numbers
*/




#include <string>
#ifndef NEWCOMPLEX1_H
#define NEWCOMPLEX1_H

using std::string;

//Complex class declaration

class Complex
{
private:

	int x;
	int y;

public:

	Complex(int initial_x = 0, int initial_y = 0);

	//setters
	void set_x(int);
	void set_y(int);

	//getters
	int get_x() const { return x; }
	int get_y() const { return y; }



};

string Sum(Complex, Complex);
string Difference(Complex, Complex);
string Product(Complex, Complex);
string Quotient(Complex, Complex);



#endif // !COMPLEX_H

