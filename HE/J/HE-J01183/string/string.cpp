#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,j=0,x=0,ans=0;; 
ll a[1000000];
char c[10000000000];
string s,d;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i]>>c[i];
		while(a[i]--)
		{
			d[j]=c[i];
			s[j]=c[i];
			j++;
		}
	}
	for(ll i=0;i<n;i++)
	{
		if(c[1]==c[i])
		{
			x=1;
		}
		else
		{
			x=0;
			break;
		}
	}
	if(x==1)
	{
		cout<<0;
		return 0;
	}
	ll k=0;
	for(int i=j;i>=0;i--)
	{
		if(d[j]!=s[k])
		{
			ans++;
		}
		k++;
	}
	cout<<ans/2;
	return 0;
}
