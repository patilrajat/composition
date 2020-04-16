#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <map>

int main() {

	string info="coronavirus disease is an infectious disease caused by a new virus. the disease causes respiratory illness with symptoms such as a cough, fever, and in more severe cases, difficulty breathing. you can protect yourself by washing your hands frequently, avoiding touching your face, and avoiding close contact with people who are unwell.";
	stringstream obj(info);
	string word;
	vector<string> v;
	while (getline(obj,word,' '))
	{
		v.push_back(word) ;
	}

	map<string,int> mp;
	for(int i=0;i<v.size();i++)
	{
		mp[v[i]]=count(v.begin(),v.end(),v[i]);
	}

	map<string,int>::iterator it=mp.begin();
	while(it!=mp.end())
	{
		cout<<it->first<<":"<<it->second<<endl;
		it++;
	}
	int max=0;
	it=mp.begin();
	while(it!=mp.end())
	{
		if(it->second>max)
			max=it->second;
		it++;
	}

	it=mp.begin();
	while(it!=mp.end())
	{
		if(it->second==max)
			cout<<"word repeated max time :"<<it->first<<"="<<it->second<<endl;
		it++;
	}


	return 0;
}
