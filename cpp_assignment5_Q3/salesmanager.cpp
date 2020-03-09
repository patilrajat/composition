/*
 * salesmanager.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include "salesmanager.h"
#include "manager.h"
#include "salesman.h"

sales_manager::sales_manager() {

}
sales_manager::sales_manager(int id,float sal,float bonus,float comm)
:employee(id,sal),manager(id,sal,bonus),salesman(id,sal,comm)
{

}
void sales_manager::display()
{
	employee::display();
  manager::display_manager();
  salesman::display_salesman();

}
void sales_manager::accept()
{
	employee::accept();
	  manager::accept_manager();
	  salesman::accept_salesman();
}

sales_manager::~sales_manager() {
	// TODO Auto-generated destructor stub
}

