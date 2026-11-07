#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
const int N=5010;
int n,m,a[N],cnt[N];
int stk[N],top;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	for(int i=1;i<=n;++i)
	{
		top=0;
		for(int j=i;j<=n;++j)
		{
			for(int k=1;k<=top;++k)
			{
				if(a[j]==stk[k])
				{
					top=k-1;
					break;
				}
			}
			stk[++top]=a[j];
		}
		for(int i=1;i<=top;++i) ++cnt[stk[i]];
	}
	for(int i=1;i<=m;++i) cout<<cnt[i]<<" ";
	return 0;
}
