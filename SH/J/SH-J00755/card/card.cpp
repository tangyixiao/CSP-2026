#include<bits/stdc++.h>
using namespace std;

int read()
{
	int ret=0;
	char c=getchar();
	while(!isdigit(c)) c=getchar();
	while(isdigit(c))
	{
		ret=ret*10+(c-'0');
		c=getchar();
	}
	return ret;
}
const int N=200010,M=100010;
int n,m;
int a[N];
int ans[M]={0};
int cnt[M];
int st[M];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read();
	m=read();
	bool f=1;
	for(int i=1;i<=n;i++)
	{
		a[i]=read();
		if(a[i]<a[i-1]) f=0;
	}
	
	if(f)//A
	{
		for(int i=1;i<=n;i++) ans[a[i]]=i;
		for(int i=1;i<=m-1;i++) printf("%d ",ans[i]);
		printf("%d",ans[m]);
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		memset(cnt,0,sizeof(cnt));
		int tp=0;
		for(int j=i;j<=n;j++)
		{
			if(cnt[a[j]])
			{
				while(tp)
				{
					tp--;
					cnt[st[tp]]--;
					if(st[tp]==a[j]) break;
				}
			}
			st[tp++]=a[j];
			cnt[a[j]]++;
		}
		for(int j=0;j<tp;j++) ans[st[j]]++;
	}
	for(int i=1;i<m;i++) printf("%d ",ans[i]);
	printf("%d",ans[m]);
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
