#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll ss[200005];
string s[200005];
ll ss1[200005];
string s1[200005];
int c=0;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>ss1[i]>>s1[i];
		if (s1[i]==s1[i-1])
		{
			ss[c]+=ss1[i];
		}
		else
		{
			c++;
			ss[c]=ss1[i];
			s[c]=s1[i];
		}
	}
	for (int i=1;i<=c;i++)
	{
		for (int j=c;j>=1;j++)
		{
			if (s[i]!=s[j]) 
			{
				ll mx=0;
				for (int k=1;i<=c;i++)
				{
					mx=max(mx,ss[k]);
				}
				cout<<mx;
				return 0;
			}
			else
			{
				cout<<0;
				return 0;
			}
		}
	}
	return 0;
}
