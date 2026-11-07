#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[5005]={},value[5005],ans[5005]={};
bool vis[3005];
int top=0;//当前长度 
int Find(int k)
{
	for(int i=1;i<=top;i++)
	{
		if(a[i]==k) return i;
	}
	return -1;
}
void dlt(int pos)
{
	for(int i=pos+1;i<=top;i++)
	{
		vis[a[i]]=false;
	}
	return;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	if(n<=5000)
	{
		for(int i=1;i<=n;i++) scanf("%d",&value[i]);
		for(int o=1;o<=n;o++)
		{
			top=0;
			memset(vis,false,sizeof(vis));
			memset(a,0,sizeof(a));
			for(int i=o;i<=n;i++)
			{
				int pos=Find(value[i]);
				if(pos==-1)
				{
					top++;
					a[top]=value[i];
					vis[value[i]]=true;
				}
				else{
					dlt(pos);
					top=pos;
				}
			}
			for(int i=1;i<=m;i++)
			{
				if(vis[i]) ans[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++) printf("%d ",ans[i]);
	fclose(stdin);
	fclose(stdout);
	return 0;
}