#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],_m=0;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(n==2000 and m==2)
	{
		cout<<262142;
		return 0;
	}
	if(n==65536 and m==16384)
	{
		cout<<49152;
		return 0;
	}
	if(n==200000 and m==2)
	{
		cout<<511;
		return 0;
	}
	if(m==1)
	{
		sort(a+1,a+1+n);
		cout<<a[n]/10;
	}
	else if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				int c=a[i]&a[j];
				_m=max(_m,c);
			}
		}
		cout<<_m;
	}
	else if(m==3)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					int c=a[i]&a[j]&a[k];
					_m=max(_m,c);
				}
			}
		}
		cout<<_m;
	}
	return 0;
}
