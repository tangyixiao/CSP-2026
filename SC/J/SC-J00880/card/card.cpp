#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<bool,int>
#define l first
#define r second 
const ll N=5e5+5,M=3e5+5;
int n,m,a[N];
vector<pii>f(M);
int ans[M];
int st[M];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int top=0;
	for(int i=n;i>=1;i--)
	{
		if(!f[a[i]].l)
		{
			f[a[i]].l=1;
			f[a[i]].r=i;
			st[++top]=a[i];
		}
		else
		{
			for(;top!=a[i];top--)
			{
				f[a[i]].l=0;
			}
		}
		for(int j=1;j<=top;j++)
		{
			ans[st[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}