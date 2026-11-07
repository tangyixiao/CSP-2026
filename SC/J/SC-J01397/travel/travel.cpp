#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r"stdin);
	freopen("travel.out","w"stdout); 
	int c1,c2,c3,c4,A1='A',B1='B',C1='C',D1='D';
	cin>>c1>>c2>>c3>>c4>>A1>>B1>>C1>>D1;
	if(c1 == c3)
	{
		cout<<"1";
		if(c2 == c4)
		{
			cout<<"1";
			if(c2 == c4)
			{
			cout<<"1";
			if(c2+1 == c4)
				{
				cout<<"1";
				}
			}
		}
		if(c2 != c4)
		{
			cout<<"0";
		}
	}
	if(c1 != c3)
	{
		cout<<"0"<<"0"<<"0"<<"0";
	}
	return 0;
}
