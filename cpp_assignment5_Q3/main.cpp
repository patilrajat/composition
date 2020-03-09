/*
 * main.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */
#include <iostream>
using namespace std;
#include "employee.h"
#include "manager.h"
#include "salesman.h"
#include "salesmanager.h"

int main()
{
	sales_manager sm;
	sm.accept();
	sm.display();
}
