/*
 * main.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */
#include "rectangle.h"
#include "shape.h"
#include "circle.h"
#include "square.h"
#include <iostream>
using namespace std;
int main()
{
	int option;
	shape *ptr[5];
	for(int i=0;i<5;++i)
	{
   cout << "\n\n1. circle\n2. rectangle\n3. square \n enter option: ";
	cin >> option;
		switch(option) {
		case 1:
			ptr[i]= new circle;
			break;
		case 2:
			ptr[i]= new rectangle;
			break;
		case 3:
			ptr[i]= new square;
			break;
		}
		ptr[i]->accept();
	}
	float total_area,total_perimeter;
	for(int i=0;i<5;++i)
		ptr[i]->display();

	total_area=0.0;
	for(int i=0;i<5;++i)
		total_area=total_area+ptr[i]->calc_area();
	total_perimeter=0.0;
	for(int i=0;i<5;++i)
		total_perimeter=total_perimeter+ptr[i]->calc_peri();

		cout<<"Total area :"<<total_area<<endl;
		cout<<"Total perimeter :"<<total_perimeter<<endl;

		return 0;
}

