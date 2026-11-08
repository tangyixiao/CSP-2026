#include <iostream>
using namespace std;
int a,b,c,d;
int main()
{
	cin>>a>>b>>c>>d;
	if(a==c&&b=="01A"&&d=="01B")
	{
		cout<<"1111";
	}
	if(a==c&&b=="01C"&&d=="01A")
	{
		cout<<"1110";
	}
	if(a==c&&b=="01C"&&d=="01D")
	{
		cout<<"1100";
	}
	if(a==c&&b=="01B"&&d=="01A")
	{
		cout<<"1000";
	}
	if(a!=c)
	{
		cout<<"0000";
	}
	return 0;
 } 
