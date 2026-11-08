#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=2e5+10;
ll a[MAXN];
char c[MAXN];
ll l[MAXN],r[MAXN];
ll s[MAXN];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		l[i]=s[i-1]+1;
		s[i]=s[i-1]+a[i];
		r[i]=s[i];
	}
//	cout<<"de:"<<endl;
//	for(int i=1;i<=n;i++) cout<<l[i]<<" "<<r[i]<<endl;
//	cout<<endl;
//	cout<<"s:";
//	for(int i=1;i<=n;i++) cout<<s[i]<<" ";
//	cout<<endl;
	int L=lower_bound(s+1,s+1+n,(s[n]+1)/2)-s;
	int R=lower_bound(s+1,s+1+n,(s[n]+1+1)/2)-s;
	ll posl=(s[n]+1)/2;
	ll posr=posl+(s[n]%2==0);
//	cout<<"L="<<L<<" R="<<R<<endl;
	ll ans=0;
	while(1)
	{
//		cout<<"pos="<<posl<<" "<<posr<<endl;
		ll tol=posl-l[L];
		char lc=c[L];
		ll tor=r[R]-posr;
		char rc=c[R];
//		cout<<"tol="<<tol<<" tor="<<tor<<" lc="<<lc<<" rc="<<rc<<endl;
		
		ll mn=min(tol,tor)+1;
		
		posl-=mn,posr+=mn;
		
		if(mn==tol+1) L--;
		if(mn==tor+1) R++;
		
		
		if(lc!=rc) ans+=mn;
		
		
		if(posl==0 && posr==s[n]+1) break;//
	}
	cout<<ans;
	return 0;
}

