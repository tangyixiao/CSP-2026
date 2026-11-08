#include<bits/stdc++.h>
using namespace std;

long long a[200010];

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	long long c=0,x,y; 
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}
	long long ans=a[n],lll=n;
	while(lll)
	{
		int cnt=1;
		for(int i=n-1;i>=1;i--)
		{
			if(ans&a[i]!=0)
			{
				ans=ans&a[i];
				cnt++;
			}	
			if(cnt==m)
			{
				cout<<ans;
				return 0;
			}
		}
		if(cnt!=m)
		{
			n--;
			ans=a[n-1];
		}
		lll--;
	}
	cout<<0;
	return 0;
}
