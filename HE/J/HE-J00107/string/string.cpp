#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll n;
const ll N=1e6;
ll a[N];
string s;
ll h=1,t=1;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	ll d=1;
	for(int i=1;i<=n;i++)
	{
		char c;
		cin>>a[i]>>c;
		for(int j=d;j<d+a[i];j++)
		{
			s[j]=c;
		}
		d=d+a[i];
	}
	t=d-1;
	ll sum=0;
	while(h<=t)
	{
		if(s[h]==s[t])
		{
			h++;
			t--;
			continue;
		}
		else
		{
			sum++;
			h++;
			t--;
		}
	}
	cout<<sum;
	return 0;
 } 
