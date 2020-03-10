/*
 * main.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */
#include <iostream>
using namespace std;
#include "product.h"
#include "book.h"
#include "tape.h"

int main() {

	//product p1; // non-sense: not to be allowed

	int option;
	product *ptr[3];
	for(int i=0;i<3;++i)
	{
	cout << "\n\n1. book\n2. tape\nenter option: ";
	cin >> option;
	switch(option) {
	case 1:
		ptr[i] = new book;
		break;
	case 2:
		ptr[i]= new tape;
		break;
	}
	ptr[i]->accept();
	}
	for(int i=0;i<3;++i)
	     ptr[i]->display();

	float price, discount, bill;
	price=0.0;
	for(int i=0;i<3;++i)
		price =price+ptr[i]->get_price();
	discount=0.0;
	for(int i=0;i<3;++i)
		discount =discount+ ptr[i]->calc_discount();

	bill = price - discount;
		cout << "price: " << price << endl;
		cout << "discount: " << discount << endl;
		cout << "bill: " << bill << endl;

    for(int i=0;i<3;++i)
	    delete ptr[i];
	return 0;
}

