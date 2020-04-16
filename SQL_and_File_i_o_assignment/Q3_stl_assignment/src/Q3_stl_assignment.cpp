#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int choice;
	double x;
	queue<double> q1;
		do {
		cout<<"\n 0.exit \n1.Push \n2.pop \n3.peek value \n4.Delete all values\n";
		cout<<"enter choice"<<endl;
		cin>>choice;
		switch(choice)
		{
		case 1:
			cout<<"Enter element to push\n";
			cin>>x;
			q1.push(x);
			cout<<"current size :"<<q1.size()<<endl;
			break;

		case 2:
			cout<<"removed "<<q1.front()<<endl;
			q1.pop();
			cout<<"current size :"<<q1.size()<<endl;
			break;
		case 3:
			cout<<"front :"<<q1.front()<<endl;
			cout<<"back :"<<q1.back()<<endl;
			cout<<"current size :"<<q1.size()<<endl;
			break;

		case 4:
			while(!q1.empty())
			    q1.pop();
			cout<<"current size :"<<q1.size()<<endl;
			break;
		}
	} while (choice!=0);
	return 0;
}
