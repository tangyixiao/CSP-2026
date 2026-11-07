#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[n+1];
	string b[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	if(n==1 ||  n==0)
	{
		cout<<0;
		return 0;
	}
	else(n==2);
	{
		if(a[0]<a[1])
		{
			cout<<a[0];
		}
		else
		{
			cout<<a[1];
		}
	}
	return 0;
}
