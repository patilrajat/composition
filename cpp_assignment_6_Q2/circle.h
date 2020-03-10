/*
 * circle.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_
#include "shape.h"

class circle:public shape {
	float radius;

public:
	circle();
	circle(float);
	void set_radius();
	float get_radius();

	 void accept();
	 void display();
	 float calc_area();
	 float calc_peri();
	virtual ~circle();
};

#endif /* CIRCLE_H_ */
