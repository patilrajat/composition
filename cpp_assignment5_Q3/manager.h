/*
 * manager.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef MANAGER_H_
#define MANAGER_H_
#include "employee.h"
class manager:virtual public employee{
private:
	float bonus;
public:
	manager();
	manager(int,float,float bonus);
	float get_bonus();
	void set_bonus(float bonus);
	void accept();
	void display();
	~manager();
protected:
    void display_manager();
    void accept_manager();
};

#endif /* MANAGER_H_ */
