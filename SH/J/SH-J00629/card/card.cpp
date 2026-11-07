#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
ll a[N];
ll z[3005];
ll y[200005];
ll n,m;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n<=500)
	{
		for(int i=1;i<=n;i++)
		{
			ll x[3005];
			vector<ll> b;
			ll k=i;
			while(k<=n)
			{
				ll d=a[k];
				if(x[d]==1)
				{
					while(x[d]==1)
					{
						ll f;
						if(b.size()>=1)f=b[b.size()-1];
						else break;
						x[f]--;
						b.pop_back();
					}
				}
				b.push_back(d);
				x[d]++;
				k++;
			}
			for(int j=0;j<b.size();j++)
			{
				z[b[j]]++;
		 	}
			for(int i=1;i<=3005;i++)x[i]=0;
		}
		for(int i=1;i<=m;i++)
		{
			cout<<z[i]<<" ";
		}
	}
	else 
	{
		for(int i=1;i<=n;i++)
		{
			y[a[i]]=i;
		}
		for(int i=1;i<=n;i++)
		{
			cout<<y[i]<<" ";
		}
	}
	return 0;
}
