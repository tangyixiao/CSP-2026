#include<bits/stdc++.h>
using namespace std;
long long arr[200005];
int N,M,id[25];
long long _max=0;
bool vis[25];
void dfs(int layer)//C(20,10)=20!/10!/10!=11*13*14*2*17*19/7
{
	int i;
	long long ax;
	if(layer>M)
	{
		ax=arr[id[1]];
		for(i=2;i<=M;++i)
			ax&=arr[id[i]];
		_max=max(_max,ax);
		return;
	}
	for(i=1;i<=N;++i)
	{
		if(vis[i])
			continue;
		vis[i]=true;
		id[layer]=i;
		dfs(layer+1);
		id[layer]=0;
		vis[i]=false;
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int i,j;
	long long ans=0,sum=0;
	bool test_13=true,test_14_15=true,test_16_17=true;
	scanf("%d %d",&N,&M);
	for(i=1;i<=N;++i)
	{
		scanf("%lld",&arr[i]);
		test_13&=((long long)ceil(log2(arr[i]+1))==(long long)floor(log2(arr[i]+1)));
		test_14_15&=(arr[i]==i-1);
		test_16_17&=(arr[i]<=4);
	}
	if(N<=20)//test 1~5
	{
		dfs(1);
		printf("%lld",_max);
	}
	else if(M==1)//test 6
	{
		for(i=1;i<=N;++i)
			ans=max(ans,arr[i]);
		printf("%lld",ans);
	}
	else if(M==2)//test 8~10
	{
		for(i=1;i<=N;++i)
		{
			for(j=i+1;j<=N;++j)
				ans=max(ans,arr[i]&arr[j]);
		}
		printf("%lld",ans);
	}
	else if(M==N-1)//test 11~12
	{
		for(i=1;i<=N;++i)
		{
			if(i!=1)
				sum=arr[1];
			else
				sum=arr[2];
			for(j=1;j<=N;++j)
			{
				if(i==j)
					continue;
				sum=sum&arr[j];
			}
			ans=max(ans,sum);
		}
		printf("%lld",ans);
	}
	else if(M==N)//test 7
	{
		ans=arr[1];
		for(i=2;i<=N;++i)
			ans=ans&arr[i];
		printf("%lld",ans);
	}
	else if(test_13)//test 13
	{
		sort(arr+1,arr+1+N,greater<long long>());
		printf("%lld",arr[M]);
	}
	else if(test_14_15)//test 14~15
	{
		ans=arr[N];
		for(i=N;i>=N-M+1;--i)
			ans&=arr[i];
		printf("%lld",ans);
	}
	else if(test_16_17)//test 16~17
	{
		int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
		for(i=1;i<=N;++i)
			cnt1+=(arr[i]==1),cnt2+=(arr[i]==2),cnt3+=(arr[i]==3),cnt4+=(arr[i]==4);
		if(cnt4>=M)
			printf("4");
		else if(cnt3>=M)
			printf("3");
		else if(cnt2>=M||cnt2+cnt3>=M)
			printf("2");
		else if(cnt1>=M||cnt1+cnt3>=M)
			printf("1");
		else
			printf("0");
	}
	else
	{
		sort(arr+1,arr+1+N,greater<long long>());
		ans=arr[N];
		for(i=N;i>=N-M+1;--i)
			ans&=arr[i];
		printf("%lld",ans);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
5 3
31 3 1 15 7
*/
