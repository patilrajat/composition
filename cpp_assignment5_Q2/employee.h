/*
 * employee.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include "date.h"
#include "person.h"
class employee:public person {
private:
	int id;
	float sal;
	char dept[24];
	date join_date;
public:
	employee();
	employee(int id, float sal,const char*,int,int,int);
	void accept();
	void display();
	int get_id();
	void set_id(int id);
	float get_sal();
	void set_sal(float sal);
	const char* get_dept();
	void set_dept(const char *dept);
	void set_join_date(date& join_date);
		date get_join_date();
	~employee();
};

#endif /* EMPLOYEE_H_ */
