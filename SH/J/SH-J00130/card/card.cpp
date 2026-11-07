#include <bits/stdc++.h>
using namespace std;
int a[500010],cnt[300010],ans[300010];
int s[500010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++) cnt[j]=0;
		for(int j=1;j<=n;j++) s[j]=0;
		int head=1,tail=0;
		for(int j=i;j<=n;j++)
		{
			if(cnt[a[j]]==0)
			{
				s[++tail]=a[j];
				cnt[a[j]]=tail;
			}
			else
			{
				tail=cnt[a[j]];
				for(int k=1;k<=m;k++) cnt[k]=0;
				for(int k=head;k<=tail;k++) cnt[s[k]]=k; 
			}
		}
		for(int j=1;j<=m;j++) if(cnt[j]) ans[j]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
