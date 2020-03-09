/*
 * salesman.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include "salesman.h"
#include "employee.h"
#include <iostream>
using namespace std;


salesman::salesman() {
	this->comm=0;

}
salesman::salesman(int id,float sal,float comm):employee(id,sal) {
	this->comm=comm;
}
float salesman::get_comm()
{
	return this->comm;
}
void salesman::set_comm(float comm)
{
	this->comm=comm;
}
void salesman::accept()
{
	employee::accept();
	cout<<"commission :"<<endl;
	cin>>this->comm;
}
void salesman::display()
{
	employee::display();
	cout<<"commission :"<<comm<<endl;
}
void salesman::display_salesman()
{
	cout<<"comm:"<<this->comm<<endl;
}
void salesman::accept_salesman()
{
	cout<<"commission:"<<endl;
	cin>>this->comm;
}


salesman::~salesman() {
	// TODO Auto-generated destructor stub
}

