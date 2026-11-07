#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	vector<ll> a(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	vector<ll> live(m+1,0); 
	for(int i=1;i<=n;i++)
	{
		stack<ll> card;
		vector<bool> has(m+1,0);
		for(int j=i;j<=n;j++)
		{
			if(!has[a[j]])
			{
				card.push(a[j]);
				has[a[j]]=1;
			}
			else
			{
				while(card.top()!=a[j])
				{
					has[card.top()]=0;
					card.pop();
				}
			}
		}
		for(int i=1;i<=m;i++)
		{
			if(has[i]) live[i]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<live[i]<<' ';
	}
	return 0; 
}
/*
ÎÒÊÇfurry£¬À©£º35788829581QQ 
RP++
*/

