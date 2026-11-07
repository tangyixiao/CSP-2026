#include <bits/stdc++.h>
using namespace std;
long long n,a[100000002],s=0;
string c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	if(n<=3)
	{
	if(c[1]!=c[n])
	{
		if(a[1]>a[n-1])
		{
		cout<<a[1];
	    }
	    else
	    {
	    	cout<<a[n];
		}
	}
	else
	{
		cout<<"0";
	}
    }
	else
	{
		for(int i=0;i<=n;i++)
		{
				if(c[1]!=c[n-i])
				{
					if(a[1]>=a[n-i])
					{
					s+=a[i];
				    }
				    else
				    {
				    	s+=a[n-i];
					}
				}
		}
		cout<<s;
	}
	return 0;
}
