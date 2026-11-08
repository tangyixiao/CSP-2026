#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn=2e6;
ll a,b,l,r,pl,pr,ans;
int n;
struct str{
	int a;
	char c;
};
str s[maxn];
int main()
{
	freopen("string.in","r",stdin);
	freopen("sreing.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i].a>>s[i].c;
		r+=s[i].a;
	}
	l=0,r--,pl=0,pr=n-1,a=s[pl].a,b=s[pr].a;
	while(l<=r)
	{
		ll t=min(a,b);
		l+=t,r-=t,a-=t,b-=t;
		if(s[pl].c!=s[pr].c) ans+=t;
		if(a==0) pl++,a=s[pl].a;
		if(b==0) pr--,b=s[pr].a;
	}
	cout<<ans;
	return 0;
}

