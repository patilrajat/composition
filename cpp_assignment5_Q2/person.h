/*
 * person.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef PERSON_H_
#define PERSON_H_
#include "date.h"
class person {
private:
	char name[40];
	char address[100];
	date birth;
public:
	person();
	person(const char *name,const char *address, int birth_day, int birth_month, int birth_year);
	person(const char *name,const char *address, date& birth);
	void accept();
	void display();
	void set_name(const char *name);
	void set_address(const char *address);
	const char* get_name();
	const char* get_address();

	void set_birth(date& birth);
	date get_birth();
	~person();
};

#endif /* PERSON_H_ */
