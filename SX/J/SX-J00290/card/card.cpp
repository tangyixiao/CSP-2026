#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;
const int N=5e5+5;
ll n,m,a[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++) cout<<i<<" ";
	return 0;
}
