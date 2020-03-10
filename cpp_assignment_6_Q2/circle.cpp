/*
 * circle.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include "circle.h"
#include <iostream>
using namespace std;

circle::circle() {

	this->radius=0.0;

}

circle::circle(float radius)
{

		this->radius=radius;
}
void circle::set_radius()
{
	cout<<"enter radius:"<<endl;
	cin>>this->radius;
}
float circle::get_radius()
{
    return this->radius;
}


void circle::accept()
{
	cout<<"enter radius:"<<endl;
	cin>>this->radius;
}
void circle::display()
{

    cout<<"enter radius:"<<this->radius<<endl;

}
float circle::calc_area()
{
	return (3.14 * this->radius * this->radius);
}
float circle::calc_peri()
{
	return (2 * 3.14 * this->radius);
}
circle::~circle() {
	// TODO Auto-generated destructor stub
}

