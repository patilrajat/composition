/*
 * product.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */
#include <iostream>
using namespace std;
#include "product.h"
#include <cstring>

	product::product()
	{
		strcpy(this->title, "");
		this->price = 0.0;
	}
	product::product(const char *title, float price) {
		strcpy(this->title, title);
		this->price = price;
	}
	// getters/setters
	float product::get_price() {
		return this->price;
	}
	void product::accept() {
		cout << "title: ";
		cin >> this->title;
		cout << "price: ";
		cin >> this->price;
	}
	void product::display() {
		cout << "title: " << this->title << endl;
		cout << "price: " << this->price << endl;
	}


