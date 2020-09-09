//Project 1 Task 1 -
//Name - Sohaib Ali Khan, StarID - vi4362xq
//Instructor - Dr. Jie Meichsner
//Due Date - 7/2/2020


//Test for complex.cpp and complex.h

#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
	Complex c1;
	Complex c2(10,5);
		

	//Calling displayComplexNumber to show the initial value of c1 and c2
	c1.displayComplexNumber(c1, c2);

	//Changing the values of c1 using the setters for x and y
	c1.set_x(15);
	c1.set_y(20);

	//Calling displaycomplexnumber again to show the final result
	c1.displayComplexNumber(c1,c2);

	return 0;
}
