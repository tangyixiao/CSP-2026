#include<bits/stdc++.h>
using namespace std;
int a[5005];
int lst[3005];
int ans[3005];
int bit[5005];
int low_bit(int n)
{
	return n&(-n);
}
void add_bit(int n,int v)
{
	for(int i=n;i<=5000;i+=low_bit(i))
	{
		bit[i]+=v;
	}
}
long long sum_bit(int n)
{
	long long res=0;
	for(int i=n;i>=1;i-=low_bit(i))
		res+=bit[i];
	return res;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		memset(bit,0,sizeof(bit));
		memset(lst,0,sizeof(lst));
		for(int j=i;j<=n;j++)
		{
//			printf("//%d %d\n",lst[a[j]],(lst[a[j]]==0?0:sum_bit(lst[a[j]])));
			if(lst[a[j]]!=0&&sum_bit(lst[a[j]])==0)
			{
				add_bit(lst[a[j]],1);
				add_bit(j,-1);
			}
			lst[a[j]]=j;
		}
		for(int j=1;j<=m;j++)
		{
			if(sum_bit(lst[j])==0)
				ans[j]++;
		}
	}
	for(int i=1;i<=m;i++)
		printf("%d ",ans[i]);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
