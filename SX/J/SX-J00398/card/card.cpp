#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e5+5;
ll n,m,a[N],t[N],ans[N];
vector<ll> vt;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		memset(t,0,sizeof(t));
		vt.clear();
		for(int j=i;j<=n;j++)
		{
			ll wz=t[a[j]];
			if(wz!=0)while(vt.back()!=a[j]){t[vt.back()]=0;vt.pop_back();}
			else vt.push_back(a[j]);
			t[a[j]]=j;
		}
		for(auto v:vt) ans[v]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
