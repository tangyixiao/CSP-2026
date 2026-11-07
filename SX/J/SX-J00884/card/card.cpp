#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=1e5+5;
int n,m;
int a[N],last[M];
int cnt[N];
int stk[N],top;
bool vis[N];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		top=0;
		for(int i=1;i<=m;i++) last[i]=0;
		for(int j=i;j<=n;j++)
		{
			if(top&&last[a[j]]<=stk[top])
			{
				while(top&&a[stk[top]]!=a[j])
				{
					top--;
				}
				if(top) top--;
			}
			stk[++top]=j;
			last[a[j]]=j;
		}
		while(top)
		{
			cnt[a[stk[top]]]++;
			top--;
		}
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<' ';
	return 0;
}
