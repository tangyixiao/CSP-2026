#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],s[300005];
map<int,int>mp;
void dfs(int x)
{
	stack<int> v;
	for(int i=x;i<=n;i++)
	{
		if(mp.count(a[i])&&mp[a[i]]>0)
		{
			while(v.top()!=a[i])mp[v.top()]--,v.pop();
		}
		else mp[a[i]]++,v.push(a[i]);
	}
	while(!v.empty())s[v.top()]++,mp[v.top()]--,v.pop();
}
int main() 
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
	{
		dfs(i);
	}
	for(int i=1;i<=m;i++)
	{
		printf("%d ",s[i]);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
