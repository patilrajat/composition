/*
 * date.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include <iostream>
using namespace std;
#include "date.h"

date::date() {
	cout << "date() called" << endl;
	this->day = 1;
	this->month = 1;
	this->year = 1990;
}

date::date(int day, int month, int year) {
	cout << "date(int,int,int) called" << endl;
	this->day = day;
	this->month = month;
	this->year = year;
}

void date::accept() {
	cout << "date: ";
	cin >> this->day >> this->month >> this->year;
}
void date::display() {
	cout << this->day << "-" << this->month << "-" << this->year << endl;
}
void date::set_day(int day) {
	this->day = day;
}
void date::set_month(int month) {
	this->month = month;
}
void date::set_year(int year) {
	this->year = year;
}
int date::get_day() {
	return this->day;
}
int date::get_month() {
	return this->month;
}
int date::get_year() {
	return this->year;
}


date::~date() {
	cout << "~date() called" << endl;
}

