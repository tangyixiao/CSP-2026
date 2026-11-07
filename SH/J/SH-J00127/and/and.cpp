#include<bits/stdc++.h>
using namespace std;
int arr[200004];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,i,j,k,l,T,maxt=0,cnt,sum,ans=0;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;++i)
		scanf("%d",&arr[i]);
	sort(arr+1,arr+n+1);
	T=(int)log2(arr[n]);
	for(i=T;i>=0;--i)
	{
		cnt=sum=0;
		for(j=1;j<=n;++j)
		{
			if((maxt==0||arr[j]<=(1<<(maxt+1)))&&arr[j]>=ans&&(arr[j]&(1<<i)))
			{
				++cnt;
				sum=sum==0?arr[j]:(sum&arr[j]);
			}
		}
		if(cnt<m)
			continue;
		maxt=max(maxt,i);
		if(cnt==m)
		{
			printf("%lld",sum);
			return 0;
		}
		ans|=(1<<i);
	}
	printf("%d",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
