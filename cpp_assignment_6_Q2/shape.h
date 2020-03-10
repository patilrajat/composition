/*
 * shape.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef SHAPE_H_
#define SHAPE_H_

class shape {
public:
	virtual void accept()=0;
	virtual void display()=0;
	virtual float calc_area()=0;
	virtual float calc_peri()=0;
};

#endif /* SHAPE_H_ */
