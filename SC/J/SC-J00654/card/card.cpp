#include<bits/stdc++.h>
using namespace std;
const int maxn=5e3+100;
int a[maxn]={};
int sum[maxn]={};
map<int,int>mp;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		mp.insert({a[i],i});
	}
	for(int i=1;i<=m;i++){
		for(int j=i;j<=n;j++)
		{
			if(mp.find(a[j])!=mp.end())
			{
				j=max(j,mp.find(a[j])->second);
			}
			sum[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<sum[i]<<' ';
	}
	return 0;
}