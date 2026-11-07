#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];
int cmp(int a,int b)
{
	return a>b;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	long long ans=0;
	int j=1;
	while(!ans)
	{
		ans=a[j];
		if(j+m>n)
		{
			break;
		}
		for(int i=j+1;i<=m;i++)
		{
			ans&=a[i];
		}
		j++;
	}
	cout<<ans;
	return 0;
}
