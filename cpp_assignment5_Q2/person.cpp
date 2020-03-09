/*
 * person.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include "person.h"

#include <iostream>
#include <cstring>
using namespace std;
#include "person.h"

person::person() {
	cout << "person() called" << endl;
	strcpy(this->name, "");
	strcpy(this->address, "");

}
/*
person::person(const char *name, int birth_day, int birth_month, int birth_year) {
	cout << "person(char*,int,int,int) called" << endl;
	strcpy(this->name, name);
	birth.set_day(birth_day);
	birth.set_month(birth_month);
	birth.set_year(birth_year);
}
*/
person::person(const char *name,const char *address, int birth_day, int birth_month, int birth_year)
	:birth(birth_day, birth_month, birth_year) {
	cout << "person(char*,int,int,int) called" << endl;
	strcpy(this->name, name);
	strcpy(this->address, address);
}

void person::accept() {
	cout << "name: ";
	cin >> this->name;
	cout << "address: ";
	cin >> this->address;
	cout << "birth ";
	this->birth.accept();
}
void person::display() {
	cout << "name: " << this->name << endl;
	cout << "address: " << this->address << endl;
	cout << "birth date: ";
	this->birth.display();
}
void person::set_name(const char *name) {
	strcpy(this->name, name);
}
const char* person::get_name() {
	return this->name;
}
void person::set_address(const char *address) {
	strcpy(this->address, address);
}
const char* person::get_address() {
	return this->address;
}
void person::set_birth(date& birth) {
	this->birth = birth;
}
date person::get_birth() {
	return this->birth;
}

person::~person() {
	cout << "~person() called" << endl;

}

