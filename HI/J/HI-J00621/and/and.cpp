#include<bits/stdc++.h>
using namespace std;
int a[200001];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int ans=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			ans=max(ans,a[i]&a[j]);
		}
	}
	cout<<ans;
	return 0;
}
