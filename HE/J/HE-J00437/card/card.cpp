#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],lst[500005],cnt,ans[300005];
struct node
{
	int nx,nxt;
}lis[500005];
bool ad[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)lis[i].nx=lis[i].nxt=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		lis[lst[a[i]]].nxt=i;
		lis[i].nx=i+1;
		lst[a[i]]=i;
	}
	for(int l=1;l<=n;l++)
	{
		for(int i=1;i<=m;i++)ad[i]=0;
		for(int i=l;i<=n;)
		{
			if(!ad[a[i]])ans[a[i]]++;
			ad[a[i]]=1;
			if(lis[i].nxt)i=lis[i].nxt;
			else i=lis[i].nx;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
