/*
 * employee.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include <iostream>
using namespace std;
#include "employee.h"
#include "person.h"
#include "date.h"
#include <cstring>
employee::employee() {
	this->id = 0;
	this->sal = 0.0f;
	strcpy(this->dept,"");

}

employee::employee(int id, float sal,const char* dept,int day,int month,int year):join_date(day,month,year) {
	this->id = id;
	this->sal = sal;
	strcpy(this->dept, dept);
	this->join_date=join_date;
}

void employee::accept()
{
	person::accept();
	cout << "id: ";
	cin >> this->id;
	cout << "sal: ";
	cin >> this->sal;
	cout << "dept: ";
	cin >> this->dept;

	join_date.accept();
}

void employee::display() {
	person::display();
	cout << "id: " << this->id << endl;
	cout << "sal: " << this->sal << endl;
	cout << "dept: " << this->dept << endl;
	join_date.display();
}
int employee::get_id() {
	return this->id;
}
void employee::set_id(int id) {
	this->id = id;
}
float employee::get_sal() {
	return this->sal;
}
void employee::set_sal(float sal) {
	this->sal = sal;
}
void employee::set_dept(const char *name) {
	strcpy(this->dept, dept);
}
const char* employee::get_dept() {
	return this->dept;
}
void employee::set_join_date(date& join_date)
{
	this->join_date=join_date;
}
date employee::get_join_date()
	{
		return this->join_date;
	}


employee::~employee() {
	// TODO Auto-generated destructor stub
}

