#include<bits/stdc++.h>
using namespace std;
int num[200050];
char abc[200050];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		cin>>abc[i];
	}
	int l=0,r=n-1;
	int lm=0,rm=0;
	long long ans=0;
	while(l<=r)
	{
		if(lm==0&&rm==0)
		{
			if(abc[l]!=abc[r])
			{
				ans+=min(num[l],num[r]);
			}
			lm=max(num[l],num[r])-num[r];
			rm=max(num[l],num[r])-num[l];
			l++;
			r--;
		}
		else
		{
			if(lm!=0)
			{
				if(abc[l-1]!=abc[r])
				{
					ans+=min(lm,num[r]);
				}
				lm=max(lm,num[r])-num[r];
			}
			else
			{
				if(abc[l]!=abc[r+1])
				{
					ans+=min(num[l],rm);
				}
				lm=max(num[l],rm)-num[l];
			}
		}
	}
	cout<<ans;
	return 0;
}
