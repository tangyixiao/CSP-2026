#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,maxn=0,num=0;
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&arr[i]);	
	}
	for(int i=1;i<=n-m;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i!=j+1)
			{
				num=arr[i]&arr[j+1];
			}
			
		}
		if(num>maxn)
		{
			maxn=num;
		}	
	}
	printf("%lld\n",maxn);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
