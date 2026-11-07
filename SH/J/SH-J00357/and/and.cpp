#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int kiled[1000005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	int ans=0;
	for(int i=29;i>=0;i--)
	{
		int cnt=0;
		for(int j=1;j<=n;j++)
		{
			if(kiled[j])
				continue;
			if(a[j]&(1<<i))
				cnt++;
		}
		if(cnt>=m)
		{
			ans+=(1<<i);
			for(int j=1;j<=n;j++)
                	{
                	        if(kiled[j])
                        	        continue;
                	        if((a[j]&(1<<i))==0)
                        	        kiled[j]=1;
                	}
		}
	}
	printf("%d\n",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
