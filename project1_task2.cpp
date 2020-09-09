//Project 1 Task 2 -
//Name - Sohaib Ali Khan, StarID - vi4362xq
//Instructor - Dr. Jie Meichsner
//Due Date - 7/2/2020


//Project 1 Task 2 test 

#include <iostream>
#include "newcomplex1.h"
#include <string>
#include <iomanip>

using namespace std;



int main()
{
	Complex c1, c2;
	int a1, b1, a2, b2;

	cout << "Enter the first complex: real_part imaginary_part" << endl;
	cin >> a1 >> b1;
	cout << "Enter the second complex: real_part imaginary_part" << endl;
	cin >> a2 >> b2;


	c1.set_x(a1);
	c1.set_y(b1);

	c2.set_x(a2);
	c2.set_y(b2);

	cout << "The two complex numbers entered are" << endl;
	cout << "c1 = " << c1.get_x() << " + " << c1.get_y() << "i" << endl;
	cout << "c2 = " << c2.get_x() << " + " << c2.get_y() << "i" << endl;

	cout << endl;
	cout << "The arithmetic operations on these two numbers: " << endl;
	cout << "c1 + c2 = " << Sum(c1, c2) << endl;
	cout << "c1 - c2 = " << Difference(c1, c2) << endl;
	cout << "c1 * c2 = " << Product(c1, c2) << endl;
	cout << "c1 / c2 = " << Quotient(c1, c2) << endl;


	return 0;
}
