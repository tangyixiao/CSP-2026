#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdin);
	
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)
	{
		cout<<"0000";
	}	
	else if(c1==c2)
	{
		if(s1!=s2)
		{
			cout<<"1000";
		}
	}
	return 0;
} 
