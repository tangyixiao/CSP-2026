#include<bits/stdc++.h>
#define ll long long
ll n,lastn,tot,ans;
char lastc;
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	vector<pair<ll,char>> q;
	for(ll i=0; i<n; i++)
	{
		ll a;
		char b;
		cin>>a>>b;
		tot+=a;
		q.push_back({a,b});
	}
	ll i=0,j=n-1;
	ans=tot/2;
	while(j-i>0)
	{
		if(q[i].second==q[j].second)
		{
			if(q[i].first>q[j].first)
			{
				ans-=q[j].first;
			}
			else if(q[i].first==q[j].first)
			{
				ans-=q[i].first;
			}
			else
			{
				ans-=q[i].first;
			}
		}
		if(q[i].first>q[j].first)
		{
			q[i].first-=q[j].first;
			j--;
		}
		else if(q[i].first==q[j].first)
		{
			i++;
			j--;
		}
		else
		{
			q[j].first-=q[i].first;
			i++;
		}
		if(i+q[i+1].first>tot/2)
		{
			ans-=min(q[i+1].first-tot/2,tot/2-i);
		}
	}
	cout<<ans;
	/*for(ll i=0;i<n;i++)
	{
		cout<<q[i].first<<q[i].second;
	}*/

}
