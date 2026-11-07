#include<bits/stdc++.h>
using namespace std;
bool flag;
int n,m,a[500005],ne[500005],now[300005],cnt[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<a[i-1])flag=1;
		ne[now[a[i]]]=i;
		now[a[i]]=i;
	}
	if(flag)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i;j<=n;)
			{
				cnt[a[j]]++;
				while(ne[j]!=0)j=ne[j];
				j++;
			}
		}
		for(int i=1;i<m;i++)
		{
			cout<<cnt[i]<<' ';
		}
		cout<<cnt[m];
	}
	else
	{
		int cnt=0;
		for(int i=1;i<=n;i++)
		{
			cnt++;
			if(a[i+1]!=a[i])
			{
				cout<<cnt<<' ';
			}
		}
	}
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1



10 4
1 1 1 2 2 2 3 3 3 4
*/