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
ll n,m,a[N],ans;
set<int> t,s[35],tmp;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=rd(); m=rd();
	for(int i=1;i<=n;i++) a[i]=rd();
	for(int i=1;i<=n;i++) {
		t.insert(i);
		for(int k=0;k<30;k++)
			if(a[i]&(1LL<<k)) s[k].insert(i);
	}
	for(int k=29;k>=0;k--) {
		tmp.clear();
		for(int i=1;i<=n;i++)
			if(t.find(i)!=t.end() && s[k].find(i)!=s[k].end())
				tmp.insert(i);
		if(tmp.size()>=m) {t=tmp; ans+=(1<<k);}
	}
	cout<<ans<<'\n';
	return 0;
}
