#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long n,a,b=0,d;
	string c;
	char e;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		cin>>e;
		for(int j=0;j<a;j++)
		{
			c+=e;
		}
		
	}
	d=c.size()-1;
	for(int i=0;i<c.size();i++)
	{
		if(c[i]!=c[d])
		{
			b++;
		}
		if(i==d)
		{
			break;
		}
		d--;
	}
	cout<<b;
	return 0;
} 
