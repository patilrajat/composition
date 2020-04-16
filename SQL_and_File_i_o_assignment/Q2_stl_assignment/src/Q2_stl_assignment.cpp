
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<float> v1;
	int x;
	cout<<"Enter number of values :"<<endl;
	cin>>x;
	for(int i=1;i<=x;i++)
	{
		float f;
		cout<<"\nenter value"<<i<<":";
		cin>>f;
		v1.push_back(f);
	}
	cout<<endl;
	for(int j=0;j<v1.size();++j)
		cout<<v1[j]<<endl;
	float min=v1[0];
	for(int k=0;k<v1.size();++k){
		if(v1[k]<min)
			min=v1[k];
	}
	cout<<endl<<"minimum value :"<<min<<endl;

	vector<float>:: iterator itr=v1.begin();
	float max=0;
	while(itr!=v1.end())
	{
		if(*itr>max)
			max=*itr;
		itr++;
	}
	cout<<endl<<"maximum value :"<<max<<endl;

	return 0;
}
