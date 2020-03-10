/*
 * tape.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef TAPE_H_
#define TAPE_H_
#include "product.h"

class tape: public product {
private:
	int duration;
public:
	tape();
	tape(const char *, float , int );
	// getter/setter
	void accept();
	void display();
	float calc_discount();
};
#endif /* TAPE_H_ */
