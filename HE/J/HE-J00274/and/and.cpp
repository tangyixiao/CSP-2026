#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200005];
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int ans=0,maxa=0;
	if(m==1)
	{
		for(int i=1;i<=n;i++)
		{
			maxa=max(a[i],maxa);
		}
		cout << maxa << "\n";
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			ans=max(ans,a[j]&a[i]);
		}
	}
	cout << ans <<"\n";
	return 0;
} 
