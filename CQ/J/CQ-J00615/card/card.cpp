#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;

int p[N],from[N],to[N];
int ne[N];
int cnt[N];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	
	int n,m;
	scanf("%d%d",&n,&m);
	
	for(int i=1;i<=n;i++) ne[i]=-1,from[i]=-1,to[i]=-1;
	for(int i=1;i<=n;i++)
	{
		cin>>p[i];
		from[i]=ne[p[i]];
		to[ne[p[i]]]=i;
		ne[p[i]]=i;
	}
	//±©Á¦
	
	for(int st=1;st<=n;st++)
	{
		int i=st;
		while(i<=n)
		{
			cnt[p[i]]++;
			while(to[i]!=-1) i=to[i];
			i++;
		}
	}
	for(int i=1;i<=m;i++) printf("%d ",cnt[i]);
	
	
	return 0;
}
