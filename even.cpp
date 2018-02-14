#include <iostream>
 using namespace std;
int main() 
{
	int num;

	cout<<"Enter a number:";
	cin>>num;
	if(num%2==0)
	{
	    cout<<num<<" is even number"<<endl;
	}
	else if(num%2!=0)
	{
	    cout<<num<<" is odd number"<<endl;
	}
	else
	{
	    cout<<num<< "invalid input"<<endl;
	}
	return 0;
}
