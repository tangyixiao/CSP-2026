#include<bits/stdc++.h>
using namespace std;
long long nums[200050];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&nums[i]);
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int result=nums[i]&nums[j];
			if(result>ans)
			{
				ans=result;
			}
		}
	}
	cout<<ans;
	return 0;
}
