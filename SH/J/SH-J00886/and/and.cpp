#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int cnt[32][N],flag1[32][N];
int flag[32];
int n,m;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int i,j,k,x,s,flag2,ans=0;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;++i)
	{
		scanf("%d",&x);
		s=0;
		while(x)
		{
			if(x&1)
				cnt[s][++cnt[s][0]]=i;
			flag1[s][i]=x&1;
			x>>=1;
			++s;
		}
	}
	/*
	for(i=3;i>=0;--i)
	{
		for(j=1;j<=cnt[i][0];++j)
		{
			printf("----%d %d %d\n",i,j,cnt[i][j]);
		}
	}
	for(i=1;i<=n;++i)
	{
		printf("++++");
		for(j=3;j>=0;--j)
		{
			printf("%d ",flag1[j][i]);
		}
		printf("\n");
	}*/
	for(i=29;i>=0;--i)
	{
		if(cnt[i][0]>=m)
		{
			flag2=1;
			for(j=1;j<=flag[0];++j)
			{
				s=0;
				for(k=1;k<=cnt[i][0];++k)
				{
					if(flag1[flag[j]][cnt[i][k]]) ++s;
				}
				if(s<m)
				{
					flag2=0;
					break;
				}
			}
			if(flag2)
			{
				flag[++flag[0]]=i;
				ans+=(1<<i);
			}
		}
	}
	printf("%d",ans);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
什么叫我最后一个大样例过了倒数第二个没过？ 
*/
