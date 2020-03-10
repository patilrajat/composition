/*
 * rectangle.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "shape.h"

class rectangle:public shape {
	float length;
	float breadth;
public:
	rectangle();
	rectangle(float,float);
	void set_length();
	float get_length();
	void set_breadth();
	float get_breadth();
	 void accept();
	 void display();
	 float calc_area();
	 float calc_peri();
	virtual ~rectangle();
};

#endif /* RECTANGLE_H_ */
