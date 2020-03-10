/*
 * tape.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include "tape.h"
#include <iostream>
using namespace std;
#include <cstring>



	tape::tape() {
		this->duration = 0;
	}
	tape::tape(const char *title, float price, int duration)
	:product(title, price) {
		this->duration = duration;
	}
	// getter/setter
	void tape::accept() {
		product::accept();
		cout << "duration: ";
		cin >> this->duration;
	}
	void tape::display() {
		product::display();
		cout << "duration: " << this->duration << endl;
	}
	float tape::calc_discount() {
		return this->get_price() * 0.05;
	}


