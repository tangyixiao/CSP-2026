#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x;
	char c;
}a[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].x>>a[i].c;
	}
	int l=1,r=n;
	long long ans=0;
	while(l<r)
	{
		int mn=min(a[l].x,a[r].x);
		a[l].x-=mn;
		a[r].x-=mn;
		if(a[l].c!=a[r].c)
		{
			ans+=mn;
		}
		if(!a[l].x)
		{
			l++;
		}
		if(!a[r].x)
		{
			r--;
		}
	}
	cout<<ans;
	return 0;
}