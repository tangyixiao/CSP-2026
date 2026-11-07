#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+5;
const int M=3e5+5;
int n,m,a[N],ans[M],last_appear[M];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=n;i>=1;i--)
	{
		if(last_appear[a[i]]==0)
			last_appear[a[i]]=i;
	}
	for(int i=1;i<=m;i++)
		cout<<last_appear[i]<<' ';
	return 0;
}
