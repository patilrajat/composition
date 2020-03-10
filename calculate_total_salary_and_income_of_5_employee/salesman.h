/*
 * salesman.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef SALESMAN_H_
#define SALESMAN_H_

#include "employee.h"

class salesman : public employee {
private:
	float comm;
public:
	salesman();
	salesman(int id, float sal, float comm);
	float get_comm();
	void set_comm(float comm);
	void accept();
	void display();
	float calc_income();
	~salesman();
};

#endif /* SALESMAN_H_ */
