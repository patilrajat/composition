/*
 * product.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_

class product {
private:
	char title[20];
	float price;
public:
	product();
	product(const char *, float);
	// getters/setters
	float get_price();
	virtual void accept();
	virtual void display();
	virtual float calc_discount()=0;  //only declaration,it has no body
	                                  //should not be defined.
};

#endif /* PRODUCT_H_ */
