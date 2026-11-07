#include<bits/stdc++.h>
using namespace std;
int a[200000],n,o=0,p=0;
char t[200000];
int main()
{
	freopen("string.in","r",sdtin);
	freopen("string.out","w",stdout);
	long long cnt=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>t[i];
	}
	for(int i=0;(n-i-1+p)>=(i-o);i++) 
	{
		if(t[i-o]==t[n-i-1+p])
		{
			if(a[i-o]>a[n-i-1+p])
			{
				a[i-o]=a[i-o]-a[n-i-1+p];
				o++;
			}
			else
			{
				a[n-i-1+p]=a[n-i-1+p]-a[i-o];
				p++;
			}
		}
		else
		{
			if(a[i-o]>a[n-i-1+p])
			{
				a[i-o]=a[i-o]-a[n-i-1+p];
				cnt+=a[n-i-1+p];
				o++;
			}
			else if(a[i-o]==a[n-i-1+p])
			{
				cnt+=a[i-o];
			}
			else 
			{
				a[n-i-1+p]=a[n-i-1+p]-a[i-o];
				cnt+=a[i-o];
				p++;
			}
		}
	}
	cout<<cnt;
	return 0;
 } 
