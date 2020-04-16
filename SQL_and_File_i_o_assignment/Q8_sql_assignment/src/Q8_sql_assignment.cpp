#include <iostream>
using namespace std;
#include "student.h"
#include <fstream>
#include <sstream>

int menulist() ;

int main() {

	ofstream ofile ;
	ifstream ifile ;
	fstream file ;


	student s ;


	int choice ;
	while ((choice = menulist()) != 0 ){
		switch (choice) {
			case 1:
				ofile.open("student",ios::binary|ios::app) ;
				s.accept() ;
				ofile.write((char *)&s,sizeof(student)) ;
				ofile.close() ;
				break;

			case 2 :
					ifile.open("student",ios::binary) ;
					while(ifile.read((char *)&s,sizeof(student))){
						s.display() ;
					cout<<endl ;
				}
					ifile.close() ;
				break ;

				/* doubt*/
	/* when i am tring to print last roll no file it get printed twice */ // ??????????

			case 3 :
				ifile.open("student",ios::binary) ;
				int roll ;
				cout<<"Enter roll no to be searched : " ;
				cin>>roll ;
				while(ifile.read((char*)&s,sizeof(student))){
					if (s.getRollNo() == roll )
						s.display() ;
				}
				ifile.close() ;
				break ;

			case 4 :
				file.open("student",ios::in|ios::out|ios::ate|ios::binary) ;
				file.seekg(0);   //when you open in "ate" mode it point at end
				                 //there for we are taking it at start
				cout<<"Enter roll no to be searched : " ;
				int roll1;
				cin>>roll1 ;
				while(file.read((char *)&s,sizeof(student))){
					if (s.getRollNo() == roll1 ){
						cout<<"Here is old data : " <<endl;
						s.display() ;
						cout<<"Now re enter data for roll no : " ;
						s.accept() ;
						s.display() ;
						file.seekp(file.tellp()-sizeof(student));
						file.write((char *)&s,sizeof(student)) ;
						break;
					}
				}

				file.close() ;
				break ;

			default:
				cout<<"\nEnter valis choice..."<<endl ;
				break;
		}
	}

	return 0;
}
int menulist()
{
	cout<<"\n\n0. EXIT "<<endl ;
	cout<<"1. ADD STUDENT" <<endl ;
	cout<<"2. DISPLAY ALL STUDENT"<<endl ;
	cout<<"3. FIND STUDENT BY ROLL NO "<<endl ;
	cout<<"4. EDIT STUDENT" <<endl ;
	cout<<"Enter choice : " ;
	int choice ;
	cin>>choice ;
	return choice ;

}
