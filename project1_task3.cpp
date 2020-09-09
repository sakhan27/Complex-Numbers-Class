//Project 1 Task 3 -
//Name - Sohaib Ali Khan, StarID - vi4362xq
//Instructor - Dr. Jie Meichsner
//Due Date - 7/2/2020

/* Description - Using operator overloading to redo Task2, using friend function
to define input output operator overloading and non-member functions for all other
arithmetic operator overloading.
*/


//Task 3 Test from int main
#include <iostream>
#include "newcomplex2.h"
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;



int main()
{
	Complex c1, c2;
	Complex sum, diff, prod, quot; //creating 4 objects for the 4 arithmetic operations


	cout << "Enter the first complex: real_part imaginary_part" << endl;
	cin >> c1; //Using input operator overloading 
	cout << "Enter the second complex: real_part imaginary_part" << endl;
	cin >> c2;



	cout << "The two complex numbers entered are" << endl;
	cout << "c1 = " << c1 << endl; //Using output operator overloading
	cout << "c2 = " << c2  << endl;

	cout << endl;
	cout << "The arithmetic operations on these two numbers: " << endl;


	//Calculations using arithmetic operator overloading
	sum = c1 + c2;
	diff = c1 - c2;
	prod = c1 * c2;
	quot = c1 / c2;

	//Printing the outputs using input output operator overloading
	cout << "c1 + c2 = " << sum << endl;
	cout << "c1 - c2 = " << diff << endl;
	cout << "c1 * c2 = " << prod << endl;
	cout << "c1 / c2 = " << quot << endl;

	
	return 0;
}
