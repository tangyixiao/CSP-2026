#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==n)
	{
		ans=a[1];
		for(int i=2;i<=n;i++) ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	if(m==1) 
	{
		for(int i=1;i<=n;i++) ans=max(a[i],ans);
		cout<<ans;
		return 0;
	}
	if(m==2)
	{
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				ans=max(a[i]&a[j],ans);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1)
	{
		ans=a[1];
		for(int i=2;i<=n;i++) ans=ans&a[i];
		ans=ans&a[1];
		for(int i=2;i<=n;i++) ans=max(ans&a[i],ans);
		cout<<ans;
		return 0;
	}
	priority_queue<int> q;
	for(int i=1;i<=n;i++) q.push(a[i]);
	while(m--)
	{
		ans=ans&q.top();
		q.pop();
	}
	cout<<ans;
	return 0;
}

