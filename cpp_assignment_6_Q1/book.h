/*
 * book.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef BOOK_H_
#define BOOK_H_
#include "product.h"

class book: public product {
private:
	int pages;
public:
	book();
	book(const char *, float , int );
	// getter/setter
	void accept();
	void display();
	float calc_discount();
};

#endif /* BOOK_H_ */
