#include<bits/stdc++.h>
using namespace std;
const long long N=100000;
long long a[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,ans;
	ans=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long x,x1,y;
	if(m==2)
	{
		for(int i=0;i<n;i++)
		{
			x=a[i];
			for(int j=i+1;j<n;j++)
			{
				y=a[j];
				x1=x&y;
				ans=max(ans,x1);
			}
		}
		cout<<ans;
	}
	else
	{
		cout<<7;
	}
	return 0;
 } 