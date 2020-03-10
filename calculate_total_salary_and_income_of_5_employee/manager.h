/*
 * manager.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef MANAGER_H_
#define MANAGER_H_
#include "employee.h"

class manager : public employee {
private:
	float bonus;
public:
	manager();
	manager(int id, float sal, float bonus);
	float get_bonus();
	void set_bonus(float bonus);
	void accept();
	void display();
	float calc_income();
	~manager();
};

#endif /* MANAGER_H_ */
