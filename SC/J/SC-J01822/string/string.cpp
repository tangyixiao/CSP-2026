#include<bits/stdc++.h>
using namespace std;
long long a[999999],b[999999],c[999999],num=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	if(n==1)
	{
		cout<<"0";
		return 0;
	}
	char x;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i]>>x;
		b[i]=int(x);
		c[i]=0;
	}
	long long p=1,q=n;
	while(1)
	{
		if(c[p]==1||c[q]==1)
		{
			cout<<num;
			return 0;
		}
		if(a[p]>a[q])
		{
			if(b[p]!=b[q])
			{
				num+=a[q];
			}
			a[p]-=a[q];
			c[q]=1;
			q--;
		}
		else if(a[p]<a[q])
		{
			if(b[p]!=b[q])
			{
				num+=a[p];
			}
			a[q]-=a[p];
			c[p]=1;
			p++;
		}
		else if(a[p]==a[q])
		{
			if(b[p]!=b[q])
			{
				num+=a[p];
			}
			c[q]=1;
			c[p]=1;
			q--;
			p++;
		}
	}
	return 0;
 }