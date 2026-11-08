#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll MAXN=2e5+5;

ll n,sum,ans;
struct p
{
	ll num;
	char c;
}ls[MAXN];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>ls[i].num>>ls[i].c;
		sum+=ls[i].num;
	}
	int l=1,r=n;
	while(l<r)
	{
		if(ls[l].c!=ls[r].c)
		{
			if(ls[l].num<ls[r].num)
			{
				ans+=ls[l].num;
				ls[r].num-=ls[l].num;
				l++;
			}
			else if(ls[l].num>ls[r].num)
			{
				ans+=ls[r].num;
				ls[l].num-=ls[r].num;
				r--;
			}
			else
			{
				ans+=ls[l].num;
				l++;
				r--;
			}
		}
		else
		{
			if(ls[l].num<ls[r].num)
			{
				ls[r].num-=ls[l].num;
				l++;
			}
			else if(ls[l].num>ls[r].num)
			{
				ls[l].num-=ls[r].num;
				r--;
			}
			else
			{
				l++;
				r--;
			}
		}
	}
	cout<<ans;
	return 0;
}
