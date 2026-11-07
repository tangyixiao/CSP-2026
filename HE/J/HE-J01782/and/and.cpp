#include<bits/stdc++.h>
using namespace std;
int n,m,a[100000]={0},sum=0,ans[100000]={0},mi=-1000005;

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m=1)
	{
		
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<=n;i++)
		{
			if(a[i]>mi)
			{
				mi=a[i];
			}
		}
		cout<<mi;
		return 0;
	}

	if(m=n)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int dick=a[1];
		for(int i=2;i<=n;i++)
		{
			dick=dick and a[i];
		}
		cout<<dick;
		
	}
	return 0;
}
