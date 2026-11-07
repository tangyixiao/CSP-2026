#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool now[300005];
ll cnt[300005];
ll a[500005];
stack<ll>s;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int len = 1;len<=n;len++)
	{
		while(!s.empty())
		{
			s.pop();
		}
		for(int i = 1;i<=m;i++)now[i] = 0;
		for(int i = len;i<=n;i++)
		{
			if(!now[a[i]])
			{
				s.push(a[i]);
				cnt[a[i]]++;
				now[a[i]] = 1;
			}
			else
			{
				bool br = 0;
				while(!s.empty())
				{
					if(s.top()==a[i])break;
					cnt[s.top()]--;
					now[s.top()] = 0;
					s.pop();
				}
			}
		}
//		for(int i = 1;i<=m;i++)
//		{
//			cout<<cnt[i]<<" ";
//		}
//		cout<<endl;
	}
	for(int i = 1;i<=m;i++)
	{
		cout<<cnt[i]<<" ";
	}
	return 0;
}