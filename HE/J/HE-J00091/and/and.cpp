#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> a(200005);
int n,m,maxx=0;
void dfs(int num,int now,int nowm)
{
	if(num!=-1&&num<=maxx) return;
	if(nowm==0)
	{
		maxx=max(num,maxx);
		return;	
	}
	if(now==n) return;
	for(int i=now+1;i<=n;i++)
	{
		dfs((num==-1 ? a[i]:num&a[i]),i,nowm-1);
	}
	return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	dfs(-1,0,m);
	cout<<maxx;
	return 0;
}
/*
ÎÒÊÇfurry£¬À©£º35788829581QQ 
RP++
*/
