#include<bits/stdc++.h>
using namespace std;
int n,m,t[300010],maxn=-1e9,minn=1e9,ans,a[500010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i],t[a[i]]++;
	for(int i=1;i<=m;i++)cout<<(t[i]-1)/2<<' ';
	return 0;
 } 
