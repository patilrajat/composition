#include <iostream>
#include <list>
#include <set>
using namespace std;

int main()
{
	list<int> l1;
	for(int i=0;i<100;i++)
		l1.push_back(rand());

	list<int> ::iterator itr;
	itr=l1.begin();
	cout<<"\nrandomly taken 100 element :"<<endl;
	for(int i=0;i<l1.size();i++)
	{
		cout<<*itr<<", ";
		itr++;
	}
	set<int> s1;
	set<int> :: iterator ptr;
	itr = l1.begin();
	for(int i=0;i<l1.size();i++)
		{
			s1.insert(*itr);
			itr++;
		}
	ptr=s1.begin();
	cout<<"\nUnique numbers using set :"<<endl;
	for(int i=0;i<s1.size();i++)
	{
		cout<<*ptr<<", ";
		ptr++;
	}
	return 0;
}
