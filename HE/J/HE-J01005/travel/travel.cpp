#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string t1,t2,t3,t4,a,b,c,d,a1,b2,c3,d4;
	cin>>t1>>t2>>t3>>t4;
	a = t1;
	b = t2;
	c = t3;
	d = t4;

	b2 = t2;

	d4 = t4;
	
	if(t1==t3)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	
	
	if(t1==t3)
	{
		if(t2[0]+t2[1] == t4[0]+t4[1])
		{
			cout<<"1";
		}
		else
		{
			cout<<"0";
		}
	}
	else
	{
		cout<<"0";
	}
	
	
	if(t1==t3)
	{
		if(t2[0]+t2[1] == t4[0]+t4[1])
		{
			if(t2[2] = t4[2])
			{
				cout<<"1";
			}
			else
			{
				cout<<"0"; 
			}
		}
		else
		{
			cout<<"0";
		}
	}
	else
	{
		cout<<"0";
	}
	
	if(t1==t3)
	{
		if(t2[0]+t2[1] == t4[0]+t4[1])
		{
			if(t2[2] == t4[2])
			{
				cout<<"1";
				
			}
			else
			{
				cout<<"0"; 
			}
		}
		else
		{
			cout<<"0";
		}
	}
	else
	{
		cout<<"0";
	}
	
	
	
	
	
	
	
	
	return 0;
}
