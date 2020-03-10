/*
 * square.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include "square.h"
#include <iostream>
using namespace std;

square::square() {

	this->side=0.0;

}

square::square(float side)
{

		this->side=side;
}
void square::set_side()
{
	cout<<"enter side:"<<endl;
	cin>>this->side;
}
float square::get_side()
{
    return this->side;
}


void square::accept()
{
	cout<<"enter side:"<<endl;
	cin>>this->side;
}
void square::display()
{

    cout<<"enter side:"<<this->side<<endl;

}
float square::calc_area()
{
	return (this->side * this->side);
}
float square::calc_peri()
{
	return (4 * this->side);
}
square::~square() {
	// TODO Auto-generated destructor stub
}

