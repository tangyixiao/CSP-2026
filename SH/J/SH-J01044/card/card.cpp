#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100005],b[100005],ff[100005];
queue<long long> q;
map<long long,long long> mp;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int i=1;i<=n;i++)ff[a[i]]=1;
		b[i]=a[i];
		bool f=0;
		for(int j=i;j<=n;j++)
		{
			b[j]=a[j];
			q.push(a[j]);
			if(b[j]==b[i])
			{
				f=1;
				int k=j-i+1;
				while(k--)q.pop();
				break;
			}
		}
		if(f==0)
		{
			q.push(b[i]);
			q.pop();
		}
		while(!q.empty())
		{
				mp[q.front()]++;
				ff[a[i]]=0;
				q.pop();
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<mp[i]<<' ';
	}
}
