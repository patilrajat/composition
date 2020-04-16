#include <iostream>
using namespace std;
#include <vector>
#include <fstream>
#include <algorithm>

int main() {
	vector<int> v;
	vector<int> result;
	ifstream in;
	in.open("TEST.txt");

	int no;
	while(!in.eof())
	{
		in>>no;
		v.push_back(no);
	}
	vector<int>:: iterator itr=v.begin();
	for(int i=1;i<=9;++i)
	{
		itr= find(v.begin(),v.end(),i);
				if(itr==v.end())
					result.push_back(i);
	}

		itr = result.begin() ;

		while (itr != result.end()){
			cout<<*itr<<" " ;
			itr++ ;
		}

	return 0;
}
