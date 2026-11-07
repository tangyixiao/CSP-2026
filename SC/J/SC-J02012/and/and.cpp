#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 2e5 + 10;
const int T = 2e5 + 10;

ll a[N],maxn = -1000;
int n,k,v[N];
int counter = 1;

bool cmp(ll x,ll y)
{
	return x > y;
}

void dfs(int m,ll ans)
{
	if(counter > T)
	{
		cout<<maxn;
		exit(0); 
	}
	
	if(m == k + 1)
	{
		maxn = max(maxn,ans);
		++ counter;
		return;
	}
	
	for(int i=1;i<=n;i++)
	{
		if(v[i] == 0)
		{
			v[i] = 1;
			dfs(m + 1,(m == 1) ? a[i] : (ans & a[i]));
			v[i] = 0;
		}
	} 
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	
	cin>>n>>k;
	
	for(int i=1;i<=n;i++)
		cin>>a[i];
	
	sort(a+1,a+1+n,cmp);
	
	dfs(1,0);
	cout<<maxn;
	
	return 0;
}