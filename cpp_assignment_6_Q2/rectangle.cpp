/*
 * rectangle.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include "rectangle.h"
#include <iostream>
using namespace std;

rectangle::rectangle() {
	this->breadth=0.0;
	this->length=0.0;

}

rectangle::rectangle(float length,float breadth)
{
	this->breadth=breadth;
		this->length=length;
}
void rectangle::set_length()
{
	cout<<"enter length:"<<endl;
	cin>>this->length;
}
float rectangle::get_length()
{
    return this->length;
}
void rectangle::set_breadth()
{
	cout<<"enter breadth:"<<endl;
		cin>>this->breadth;
}
float rectangle::get_breadth()
{
	return this->breadth;
}

void rectangle::accept()
{
	cout<<"enter length:"<<endl;
	cin>>this->length;
	cout<<"enter breadth:"<<endl;
	cin>>this->breadth;
}
void rectangle::display()
{
	cout<<"enter breadth:"<<this->breadth<<endl;
    cout<<"enter length:"<<this->length<<endl;

}
float rectangle::calc_area()
{
	return this->breadth * this->length;
}
float rectangle::calc_peri()
{
	return 2 * (this->breadth + this->length);
}

rectangle::~rectangle() {
	// TODO Auto-generated destructor stub
}

