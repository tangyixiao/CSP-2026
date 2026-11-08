#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	for(int i=1;i<=2;i++)
	{
		if(c1[i]-'0'==c2[i]-'0')
		{
			cout<<"1"; 
		}
		else
		{
			cout<<"0";
		}
	}
	
	
}
