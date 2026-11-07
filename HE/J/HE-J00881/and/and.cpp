#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
bool f=1;
long long c[5];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>=4)
		{
			f=0; 
		}
	}
	if(f==1)
	{
		for(int i=1;i<=n;i++)
		{
			c[a[i]]++;
		}
		if(c[3]>=m)
		{
			cout<<"3";
		}else if(c[2]>=m)
		{
			cout<<"2";
		}else if((c[3]+c[2])>=m)
		{
			cout<<"2";
		}else if(c[1]>=m || (c[3]+c[1])>=m || (c[1]+c[2])>=m)
		{
			cout<<"1"; 
		}else
		{
			cout<<"0";
		}
		return 0;
	}
	sort(a+1,a+n+1);
	if(m==1)
	{
		cout<<a[n];
	}
	else
	{
	cout<<a[n-m+1];
	}
	return 0;
 } 
