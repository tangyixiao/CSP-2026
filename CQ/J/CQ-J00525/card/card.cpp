#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
using namespace std;
ll a[500001];
ll s[500001];
ll d[300001];
ll t[300001];
ll r[300001];
ll v[300001];
ll ans[300001];
queue<ll> q;
vector<ll> e[300001];
ll n,m;
void bfs()
{
	for (ll i=1;i<=m;i++)
	{
		if (r[i]==0)q.push(i);
		ans[i]=t[i];
	}
	while (q.size())
	{
		ll x=q.front();
		q.pop();
		for (ll i=0;i<e[x].size();i++)
		{
			ll y=e[x][i];
			r[y]--;
			ans[y]+=ans[x];
			if (r[y]==0)q.push(y);
		}
	}
}
int main ()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for (ll i=1;i<=n;i++)cin>>a[i];
	ll cnt=0,top=0;
	for (ll i=n;i>=1;i--)
	{
		t[a[i]]++;
		d[s[top+1]]=0;
		s[++top]=a[i];
		if (d[a[i]]!=0&&d[a[i]]<=top)top=d[a[i]];
		d[a[i]]=top;
		if (v[a[i]]==0)
		{
			if (top>1)
			{
				e[a[i]].push_back(s[top-1]);
				r[s[top-1]]++;
//				cout<<a[i]<<"->"<<s[top-1]<<'\n';
			}
			v[a[i]]=1;
		}
	}
	bfs();
	for (ll i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
/*
Today is my third CSP-J/S (I'm in Grade 8)
before 9:34,my computer's time is wrong. 
I never solve all problem before
but,now,I got it,I'm so happy
the first problem is too easy to think
the second problem is a little hard to code
the third problem is a middle problem
the forth problem is a hard problem for me
although I typed all the problem
I don't know my point yet(~~I want a blue tick in CSP-S~~)
wish I have a good result
           CQ-J00525/CQ-S00475(Luogu UID:832774)
           2026/10/31 10:49
*/
