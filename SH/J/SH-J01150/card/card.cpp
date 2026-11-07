#include<bits/stdc++.h>
using namespace std;
int cnt[500005],arr[500005],ans[500005];
stack<int> s;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int i,j,n,m,flag=0;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;++i)
	{
		scanf("%d",&arr[i]);
		if(arr[i]<arr[i-1])
			flag=1;
	}
	if(flag)
	{
		for(i=1;i<=n;++i)
		{
			memset(cnt,0,sizeof(cnt));
			for(j=i;j<=n;++j)
			{
				if(cnt[arr[j]]==0)
				{
					s.push(arr[j]);
					cnt[arr[j]]=1;
				}
				else
				{
					while(!s.empty()&&s.top()!=arr[j])
					{
						cnt[s.top()]=0;
						s.pop();
					}
				}
			}
			while(!s.empty())
			{
				ans[s.top()]++;
				s.pop();
			}
		}
		for(i=1;i<=m;++i)
			printf("%d ",ans[i]);
	}
	else
	{
		for(i=2;i<=n;++i)
		{
			if(arr[i]!=arr[i-1])
				printf("%d ",i-1);
		}
		printf("%d",n);
	}
	return 0;
}

