#include<bits/stdc++.h>
using namespace std;
int arr[500005],last[300005],ans[500005],cnt[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int N,M,i,j,k,xbb=0;
	bool test_789=true;
	scanf("%d %d",&N,&M);
	for(i=1;i<=N;++i)
		scanf("%d",&arr[i]);
	for(i=1;i<N;++i)
		test_789&=(arr[i]<=arr[i+1]);
	if(N<=500&&M<=200)//TEST 1~6: 24 points
	{
		for(i=1;i<=N;++i)
		{
			memset(last,0xff,sizeof(last));
			for(j=i;j<=N;++j)
			{
				if(last[arr[j]]!=-1)
				{
					for(k=last[arr[j]];k<j;++k)
						last[arr[k]]=-1;
				}
				last[arr[j]]=j;
			}
			for(j=1;j<=M;++j)
				ans[j]+=(last[j]!=-1);
		}
		for(i=1;i<=M;++i)
			printf("%d ",ans[i]);
	}
	else if(test_789)//TEST 7~9: 12 points
	{
		for(i=1;i<=N;++i)
			cnt[arr[i]]++;
		for(i=1;i<=M;++i)
		{
			xbb+=cnt[i];
			printf("%d ",xbb);
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
