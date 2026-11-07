#include <bits/stdc++.h>
using namespace std;
#define gc getchar()
#define pb push_back
typedef long long ll;
const int N=4e5+6;
ll rd() {
	ll x=0,f=1; char c=gc;
	for(;c<'0'||c>'9';c=gc)if(c=='-')f=-1;
	for(;c>='0'&&c<='9';x=x*10+c-'0',c=gc);
	return x*f;
}
ll n,a[N],b[N],s[N],t[N],ans;
char c[N],d[N];
vector<ll> st;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	n=rd();
	for(int i=1;i<=n;i++) {
		a[i]=rd(); cin>>c[i];
		b[n-i+1]=a[i]; d[n-i+1]=c[i];
	}
	for(int i=1;i<=n;i++) {
		s[i]=s[i-1]+a[i]; st.pb(s[i]);
		t[i]=t[i-1]+b[i]; st.pb(t[i]);
	}
	sort(st.begin(),st.end());
	st.erase(unique(st.begin(),st.end()),st.end());
	for(int i=0;i<((int)st.size());i++) {
		int p=(lower_bound(s+1,s+n+1,st[i])-s);
		int q=(lower_bound(t+1,t+n+1,st[i])-t);
		if(c[p]!=d[q]) {
			ans+=st[i]-(i==0?0:st[i-1]);
//			cout<<st[i]<<' ';
		}
	}
	cout<<ans/2<<'\n';
	return 0;
}
