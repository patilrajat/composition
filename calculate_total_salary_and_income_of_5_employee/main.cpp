/*
 * main.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */
#include <iostream>
using namespace std;
#include "manager.h"
#include "employee.h"
#include "salesman.h"

/*int main()
{
	int choice;
	employee *e;
	cout<<"\n1. employee \n2. manager \n3. salesman"<<endl;
	cin>>choice;
	switch(choice)
	{
	case 1:
		  e=new employee;
		  break;
	case 2:
			e=new manager;
			break;
	case 3:
			e=new salesman;
			break;
	}
	e->accept();
	e->display();

	cout << "salary : " << e->get_sal() << endl;
	cout << "income : " << e->calc_income() << endl;

	delete e;
	return 0;
}*/

int main()
{
	int choice;
		employee *e[5];
	for(int i=0;i<5;++i)
	{
		cout<<"\n1. employee \n2. manager \n3. salesman"<<endl;
		cin>>choice;
		switch(choice)
		{
		case 1:
			  e[i]=new employee;
			  break;
		case 2:
				e[i]=new manager;
				break;
		case 3:
				e[i]=new salesman;
				break;
		}
		e[i]->accept();
	}

		for(int i=0;i<5;++i)
		     e[i]->display();

		float sum=0.0;
		for(int i=0; i<5; i++)
			sum = sum + e[i]->get_sal();
		cout << "total salary of all emps: " << sum << endl;

		sum = 0.0;
		for(int i=0; i<5; i++)
			sum = sum + e[i]->calc_income();
		cout << "total income of all emps : " << sum << endl;

	for(int i=0;i<5;++i)
		delete e[i];
		return 0;

}

