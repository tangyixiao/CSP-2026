// 水 
/*
	CSP-S 2026 RP++
	
	建议听《因为夏日将终》 n-buna
*/ 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=4e5+7;
struct MoonHalo
{
	ll x;
	char c;
}a[maxn];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].x>>a[i].c;
	ll i=1,j=n,p1=a[1].x,p2=a[n].x,ans1=0,ans2=0;
	while(i<j)
	{
	///	cout<<i<<' '<<j<<' '<<p1<<' '<<p2<<' '<<a[i].x<<' '<<a[i].c<<' '<<a[j].x<<' '<<a[j].c<<'\n';
		if(a[i].c==a[j].c)
		{
			int mn=min(p1,p2);
			p1-=mn,p2-=mn;
			if(p1==0) i++,p1=a[i].x;
			if(p2==0) j--,p2=a[j].x;
		}
		else if(a[i].c!=a[j].c)
		{
			if(p1>p2)
			{
				ans1+=p2;
				p1=p1-p2;
				j--;
				p2=a[j].x;
			} 
			else if(p1==p2) ans1+=p2,i++,j--,p1=a[i].x,p2=a[j].x;
			else if(p2>p1)
			{
				ans1+=p1;
				p2=p2-p1;
				i++;
				p1=a[i].x;
			} 
		//	cout<<i<<' '<<j<<' '<<p1<<' '<<p2<<' '<<ans1<<'\n';
		}
	}
//	if(a[i].x%2==0) ans1++;
	cout<<ans1;
	return 0;
}

