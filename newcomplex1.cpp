//Project 1 Task 2 -
//Name - Sohaib Ali Khan, StarID - vi4362xq
//Instructor - Dr. Jie Meichsner
//Due Date - 7/2/2020


//Implementation of newcomplex1.h

#include <iostream>
#include "newcomplex1.h"
#include <string>
#include <math.h>
#include <stdio.h>

using namespace std;

Complex::Complex(int initial_x, int initial_y)
{
	x = initial_x;
	y = initial_y;
}

void Complex::set_x(int a)
{
	x = a;
}

void Complex::set_y(int b)
{
	y = b;
}



string Sum(Complex a, Complex b)
{
	int x3, y3;
	char c1[50];
	char c2[50];
	string result;

	x3 = a.get_x() + b.get_x();
	y3 = a.get_y() + b.get_y();

	//Converting int to char to string
	snprintf(c1, sizeof(c1), "%d", x3);
	snprintf(c2, sizeof(c2), "%d", y3);
	
	string s1 = c1;
	string s2 = c2;

	result = s1 + " + " + s2 + "i";

	return result;
}

string Difference(Complex a, Complex b)
{
	int x3, y3;
	char c1[50];
	char c2[50];
	string result;

	x3 = a.get_x() - b.get_x();
	y3 = a.get_y() - b.get_y();
	
	snprintf(c1, sizeof(c1), "%d", x3);

	string s1 = c1;
	string s2;
	
	//To check if the imaginary number is a negative number put minus sign before
	if (y3 < 0) {
		y3 = y3 * -1;
		snprintf(c2, sizeof(c2), "%d", y3);
		s2 = c2;
		result = s1 + " - " + s2 + "i";
	}
	else {
		snprintf(c2, sizeof(c2), "%d", y3);
		s2 = c2;
		result = s1 + " + " + s2 + "i";
	}
	
	return result;
}

string Product(Complex a, Complex b)
{
	int x3, y3;
	char c1[50];
	char c2[50];
	string result;

	x3 = (a.get_x() * b.get_x()) - (a.get_y() * b.get_y());
	y3 = (a.get_x() * b.get_y()) + (a.get_y() * b.get_x());
	
	snprintf(c1, sizeof(c1), "%d", x3);
	
	string s1 = c1;
	string s2;

	if (y3 < 0) {
        	y3 = y3 * -1;
		snprintf(c2, sizeof(c2), "%d", y3);
		s2 = c2;
		result = s1 + " - " + s2 + "i";
	}
        else {
		snprintf(c2, sizeof(c2), "%d", y3);
 		s2 = c2;
	       	result = s1 + " + " + s2 + "i";
	}

	return result;
	
}

string Quotient(Complex a, Complex b)
{
	float x3, y3;
	string result;
	char c1[50];
	char c2[50];

	
	//Converting int to float 
	x3 = (float(a.get_x() * b.get_x()) + float(a.get_y() * b.get_y())) / (float(b.get_x() * b.get_x()) + float(b.get_y() * b.get_y()));
	y3 = (float(a.get_y() * b.get_x()) - float(a.get_x() * b.get_y())) / (float(b.get_x() * b.get_x()) + float(b.get_y() * b.get_y()));


	//Converting float to char to string 
	snprintf(c1, sizeof(c1), "%.2f", x3);

	string s1 = c1;
	string s2;

	if (y3 < 0) {
                y3 = y3 * -1.0;
                snprintf(c2, sizeof(c2), "%.2f", y3);
                s2 = c2;
                result = s1 + " - " + s2 + "i";
        }
        else {
		snprintf(c2, sizeof(c2), "%.2f", y3);
		s2 = c2;
		result = s1 + " + " + s2 + "i";
        }

	return result;

}

