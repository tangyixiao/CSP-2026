#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(m==2)
	{
		int mx=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(i!=j)
					mx=max(mx,a[i]&a[j]);
		cout<<mx;
	}
	else 
	{
		sort(a+1,a+1+n,cmp);
		int cnt=a[1];
		for(int i=2;i<=m;i++)
			cnt&=a[i];
		cout<<cnt;
	}
	return 0;
}