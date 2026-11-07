#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],b[300005],ans[300005],cnt[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		int last=0;
		for(int j=i;j<=n;j++)
		{
			if(b[a[j]]!=0 and b[a[j]]<=last)last=b[a[j]];
			else
			{
				b[a[j]]=last+1;
				last++;
				cnt[last]=a[j];
			}
		}
		for(int j=1;j<=last;j++)ans[cnt[j]]++;
		memset(cnt,0,sizeof(cnt));
		memset(b,0,sizeof(b));
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
