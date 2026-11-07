#include<bits/stdc++.h>
using ll=long long;
using namespace std;
ll n;
ll ln;
ll a[200202];
char c[200202];
ll s[200202];
ll res;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	 for(int i=1;i<=n;i++)
	 {
	 	cin>>a[i]>>c[i];
	 	ln+=a[i];
	 	s[i]=s[i-1]+a[i];
	 }
	 ll l1=1,l2=a[1],r1=s[n-1]+1,r2=ln;
	 ll x=1,y=n-1;
	 while(l2<r1)
	 {
	 	if(l2-l1<r2-r1)
	 	{
			if(c[x]!=c[y+1])
		 	{
		 		res+=l2-l1+1;
			}
	 		r2-=l2-l1+1;
	 		l1=l2+1;
	 		l2=s[++x];
		 }
		 else if(l2-l1>r2-r1)
		 {
		 	if(c[x]!=c[y+1])
		 	{
		 		res+=r2-r1+1;
			}
	 		l1+=r2-r1+1;
	 		r2=r1-1;
	 		r1=s[--y]+1;
		 }
		 else
		 {
		 	if(c[x]!=c[y+1])
		 	{
		 		res+=r2-r1+1;
			}
	 		r2=r1-1;
	 		r1=s[--y]+1;
	 		l1=l2+1;
	 		l2=s[++x];
		 }
	 }
	 cout<<res;
	return 0;
}