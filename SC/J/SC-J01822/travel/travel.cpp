#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b;
	int x,y;
	cin>>x>>a>>y>>b;
	if(x!=y)
	{
		cout<<"0000";
		return 0;
	}
	else if(a[0]!=b[0]||a[1]!=b[1])
	{
		cout<<"1000";
		return 0;
	}
	else if(int(a[2])>'C'&&int(b[2])<='C'||int(a[2])<='C'&&int(b[2])>'C')
	{
		cout<<"1100";
		return 0; 
	}
	else if(int(a[2])+1!=int(b[2])&&int(a[2])!=int(b[2])+1)
	{
		cout<<"1110";
		return 0;
	}
	else
	{
		cout<<"1111";
		return 0;
	}
	return 0;
 } 