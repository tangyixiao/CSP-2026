#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=5e5+5;
int n,m,a[N],ans;
vector<int>g;
signed main()
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
		ans++;
		if(a[i]==a[i-1])continue;
		g.push_back(ans);
	}
	for(int i=1;i<=m;i++)cout<<g[i]-1<<' ';
	return 0;
}
/*
太难了（bushi），
我要学whk
"众宾欢也"
*/