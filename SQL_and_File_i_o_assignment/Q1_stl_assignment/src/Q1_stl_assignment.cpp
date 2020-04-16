
#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	list<string> l1{"ram","sham","rajat","dhiraj","aniruddha","shrikant","saurabh","akshay","bahubali","bhallaldev"};
	list<string>:: iterator itr;
	    itr=l1.begin();
	cout<<"before sorting :"<<endl;
	while(itr!=l1.end())
	    {
		cout << *itr<<endl;
		itr++;
	    }
	l1.sort();
	itr=l1.begin();
	cout<<"after sorting :"<<endl;
    while(itr!=l1.end())
    {
	cout << *itr<<endl;
	itr++;
    }
	return 0;
}
