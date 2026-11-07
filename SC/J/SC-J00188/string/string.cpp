#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int r=0;
	int c=0;
	int k=0;
	int a[n];
	char z[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>z[i];
		c=c+a[i];
	}
	int s[c];
	for(int i=0;i<n;i++)
	{
		for(int j=k;j<k+a[i];j++)
		{
			s[j]=z[i];
		}
		k=k+a[i];
	}
	if(c%2==0)
	{
		for(int i=0;i<c/2;i++)
		{
			if(s[i]!=s[c-i-1])
			{
				r++;
			}
		}
	}
	if(c%2==1)
	{
		for(int i=0;i<c/2;i++)
		{
			if(s[i]!=s[c-i-1])
			{
				r++;
			}
		}
	}
	cout<<r;
	return 0;
}