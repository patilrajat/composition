/*
 * salesman.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef SALESMAN_H_
#define SALESMAN_H_
#include "employee.h"

class salesman:virtual public employee {
	float comm;
public:
	salesman();
	salesman(int,float,float);
	float get_comm();
	void set_comm(float comm);
	void accept();
	void display();
	virtual ~salesman();
protected:
    void display_salesman();
    void accept_salesman();
};

#endif /* SALESMAN_H_ */
