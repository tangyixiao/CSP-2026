#include <bits/stdc++.h>
using namespace std;
int n,m,a[200020],x,ans2;
long long ans=2147483647,ans1=2147483647;
const long long t=2147483647;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	if(m==1)
	{
		cout<<a[n];
	}
	else if(m==n)
	{
		for(int i=1;i<=n;i++)
		{
			ans1=ans1&a[i];
		}
		cout<<ans1;
	}
	else if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i==j) continue;
				ans2=max(ans2,a[i]&a[j]);
			}
		}
		cout<<ans2;
	}
	else if(m==n-1)
	{
		for(int i=2;i<=n;i++)
		{
			ans1=ans1&a[i];
		}
		cout<<ans1;
	}
	else
	{
		for(int i=n;i>=1;i--)
		{
			if((a[i]&t)==a[i])
			{
				m--;
				ans=ans&a[i];
				cout<<ans<<' '<<a[i]<<'\n';
				a[i]=0;
				if(m==0) break;
			}
		}
		cout<<n<<' '<<n-m<<endl;
		for(int i=n;i>n-m;i--)
		{
			if(a[i]==0) m++;
			else
			{
				ans=ans&a[i];
				cout<<ans<<' '<<a[i]<<'\n';
			}
		}
		cout<<ans;
	}
	return 0;
}