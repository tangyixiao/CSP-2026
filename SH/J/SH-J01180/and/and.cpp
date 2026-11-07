#include<bits/stdc++.h>
using namespace std;
long long n,m,a[2000005],dp[2000005],ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	long long c;
	for(int i=n,k=1;k<=m;i--)
	{
		bool flag=true;
		int l=a[i];
		for(int i=1;i<=33;i++)
		{
			l/=2;
			if(l==2)
			{
				flag=false;
				break;
			}
		}
		if(flag)
		{
			if(k==1)c=a[i],k++;
			else k++,c&=a[i];
		}
	}
	cout<<c;
}
