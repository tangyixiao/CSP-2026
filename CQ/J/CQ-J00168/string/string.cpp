#include<bits/stdc++.h> // 100 十年OI一场空，___________________ 
#define maxn 200005 
using namespace std;
long long l=1,li,r,ri;
long long l_,r_,ls;
long long s[maxn];
long long ans;
char c[maxn];
int a[maxn];
int n;
int query(long long x)
{
	return lower_bound(s+1,s+n+1,x)-s;
}
long long query(int l,int r)
{
	return s[r]-s[l-1];
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		s[i]=s[i-1]+a[i];
		r+=a[i];
	}
	while(l<=r)
	{
//		cout<<l<<':'<<query(l)<<' '<<r<<':'<<query(r)<<endl;
		l_=s[query(l)];
		r_=s[query(r)-1];
		ls=min(l_-l,r-r_);
		if(ls<=0)
			ls=1;
		if(c[query(l)]!=c[query(r)])
			ans+=ls;
		l+=ls;
		r-=ls;
	}
	cout<<ans;
	return 0;
}
/*

鬼嘲深渊的腥红主宰，戏弄命运的无相之王——鬼嘲深渊 『嘲』灾 

*/
