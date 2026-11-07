#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans=0;
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n-m+1;i++)
	{
		int ans1=a[i];
		for(int j=1;j<m;j++)
			ans1&=a[i+j];
		if(ans>ans1) break;
		ans=max(ans,ans1);
	}
	cout<<ans;
}
