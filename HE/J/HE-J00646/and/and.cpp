#include <bits/stdc++.h> 
using namespace std;
int d[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b; 
	cin>>a>>b;
	for (int i=0;i<a;i++)
	{
		cin>>d[i];
	}
	for (int j=1;j<=a;j++)
	{
		for (int i=0;i<a;i++)
		{
		    if (d[j]>d[i])
		    {
		    	int x=d[j];
		    	d[j]=d[i];
		    	d[i]=x;
		    }
	    }
	}
	int c=d[0] & d[1];
	for (int i=1;i<b;i++)
	{
		c=c & d[i];
	}
	cout<<c;
	return 0;
}
