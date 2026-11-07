#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2e5+5;
ll n,m,f[31],num;
queue<int>q;
queue<int>a;
vector<vector<int> >rr(N);
void cx(queue<int>w)
{
	vector<queue<int> >mp(31);
	while(!w.empty())
	{
		ll t=w.front();
		w.pop();
		for(auto it:rr[t])
			mp[it].push(t);
	}
	for(int i=num;i>=0;i--)
	{
		if(mp[i].size()>=m)
		{
			q.push(i);
			num=i-1;
			cx(mp[i]);
			while(!mp[i].empty())
			{
				int it=mp[i].front();
				mp[i].pop();
			}
			return;
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	f[0]=1;num=29;
	for(int i=1;i<=29;i++)f[i]=f[i-1]*2;
	int x;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		for(int j=0;j<=29;j++)
			if(x&f[j])
				rr[i].push_back(j);
		a.push(i);
	}
	cx(a);
	ll ans=0;
	while(!q.empty())
	{
		int it=q.front();
		q.pop();
		ans+=f[it];
	}
	cout<<ans;
	return 0;
}