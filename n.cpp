#include <iostream>
using namespace std;
int main() 
{
	int num;
            cout<<"Enter a number:";
	cin>>num;
	if(num>=1&&num<=100000)
	{
	    cout<<num<<" is positive number"<<endl;
	}
	else if(num>=-100000&&num<=-1)
	{
	    cout<<num<<" is negative number"<<endl;
	}
	else
	{
	    cout<<num<< " is neither positive nor negative"<<endl;
	}
	return 0;
}
