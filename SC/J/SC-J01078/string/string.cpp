#include<bits/stdc++.h>
using namespace std;
int n,s,t;
long long l,p,q,ans,a[200005],id[200005];
char c[200005];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i]>>c[i];
		id[i]=l+1;
		l+=a[i];
	}
	p=1,q=l,s=1,t=n;
	while(s<t) {
		long long x=min(id[s]+a[s]-p,q-id[t]+1);
		if(c[s]!=c[t]) {
			ans+=x;
		}
		if(x==id[s]+a[s]-p) {
			s++;
		}
		if(x==q-id[t]+1) {
			t--;
		}
		p+=x,q-=x;
	}
	cout<<ans<<"\n";
	return 0;
}