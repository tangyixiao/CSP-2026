#include<bits/stdc++.h>
using namespace std;
long long arr[200005],len[200005];
char g[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long sum,ans=0;
	int N,i,j;
	scanf("%d",&N);
	for(i=1;i<=N;++i)
	{
		scanf("%lld %c",&arr[i],&g[i]);
		len[i]=arr[i];
	}
	for(i=1,j=N;i<j;)
	{
		sum=0;
		if(len[i]<=len[j])//若j这一块比i大，则枚举i去抵消掉j。由于要求S整个是回文串，改i还是j都可以。
		{
			while(sum<len[j])
				sum+=len[i],ans+=(g[i]!=g[j])*len[i],i++;
			if(sum>len[j])
				i--,len[i]=sum-len[j];
			ans-=(g[i]!=g[j])*(sum-len[j]);//减去多余的部分
			j--;
		}
		else
		{
			while(sum<len[i])
				sum+=len[j],ans+=(g[i]!=g[j])*len[j],j--;
			if(sum>len[i])
				j++,len[j]=sum-len[i];
			ans-=(g[i]!=g[j])*(sum-len[i]);//减去多余的部分
			i++;
		}
	}
	printf("%lld",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
3
2 a
2 b
1 c
*/
