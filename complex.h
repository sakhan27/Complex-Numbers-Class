//Project 1 Task 1 -
//Name - Sohaib Ali Khan, StarID - vi4362xq
//Instructor - Dr. Jie Meichsner
//Due Date - 7/2/2020

/* Description of the problem - Declare and define a class for a complex number. Define a complex class that has
the following member functions:
constructor, setter and getter functions for both real and imaginary part of the complex number, and a function
that displays the complex number. */


#ifndef COMPLEX_H
#define COMPLEX_H



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
	int get_x() const { return x;}
	int get_y() const { return y;}
	
	void displayComplexNumber(Complex,Complex);


};

#endif // !COMPLEX_H

