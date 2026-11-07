#include<bits/stdc++.h>
#define ll long long
#define str string
#define N 200005
using namespace std;
ll n,s_size,tot;
str s="";
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	while(n--)
	{
		char ss;
		ll x;
		cin>>x>>ss;
		str sss={x,ss};
		while(x--)	s+=ss;
	}
	s_size=s.size();
	for(ll i=0,j=s_size-1;i<=j;i++,j--)	if(s[i]!=s[j])	tot++;
	cout<<tot;
	return 0;
}