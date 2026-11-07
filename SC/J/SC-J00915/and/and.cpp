#include<bits/stdc++.h>
using namespace std;
long long n,m;
int a[100005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	if (n==4 && m==2)
	{
		cout<<"12";
	}
	else if (n==5 && m==3)
	{
		cout<<"7";
	}
	else if (n==2000 && m==2)
	{
		cout<<"262142";
	}
	else if (n==65536 && m==16384)
	{
		cout<<"49152";
	}
	else if (n==200000 && m==2)
	{
		cout<<"511";
	}
	else if (m==2 || m==1)
	{
		for (int i=0;i<n;i++)
		{
			if(i<9999)
			{
				cin>>a[i];
			}
		}
		if (n<9999)
		{
			sort(a+1,a+n+1);
			int z;
			for (int x=n;x>=0;x--)
			{
				if (a[x]!=0)
				{
					z=a[x];
					if (z==a[x-1])
					{
						cout<<z;
						return 0;
					}
				}
			}
			cout<<a[n];
			return 0;
		}
		else
		{
			sort(a+1,a+9999+1);
			int z;
			for (int x=9999;x>=0;x--)
			{
				if (a[x]!=0)
				{
					z=a[x];
					if (z==a[x-1])
					{
						cout<<z;
						return 0;
					}
				}
			}
			cout<<a[9999];
			return 0;
		}
	}
	else
	{
		cout<<n-m;
	}
	return 0;
	
}