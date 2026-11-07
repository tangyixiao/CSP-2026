#include<bits/stdc++.h>
using namespace std;
int a[200001];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==1)
	{
		sort(a+1,a+n+1);
		cout<<a[n]<<endl;
		return 0;
	}
	else if(m==2)
	{
		int maxx=INT_MIN;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				maxx=max(maxx,a[i]&a[j]);
			}
		}
		cout<<maxx<<endl;
	}
	else
	{
		int ans=0,j=n-1;
		sort(a+1,a+n+1);
		ans=a[n];
		for(int i=2;i<=m;i++)
		{
			ans=ans&a[j];
			j--;
		}
		cout<<ans<<endl;
	}
	return 0;
}