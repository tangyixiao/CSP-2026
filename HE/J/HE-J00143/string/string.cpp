#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,a[N];
char c[N];
int ans,an,ac,yu;
int ma;
string s;
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>a[i]>>c[i];
		ma=max(ma,a[i]);
		an+=a[i];
	}
	
	if(ma<=100000000) {
		for(int i=1;i<=n;i++) {
			while(a[i]--)
			s+=c[i];
		}
		for(int i=0;i<=n/2;i++) {
			if(s[i]!=s[s.size()-1-i]) ans++;
		}
		cout<<ans;
		return 0;
	}
	
	an/=n;
	if(an%n!=0) yu=an%n;
	
	for(int i=1;i<=n;i++) {
		if(an-a[i]>=0)
		ans+=(an-a[i]);
	}
//	ans+=yu;
//	cout<<ans<<endl;
	int ans2=0;
	for(int i=1;i<=n;i++) {
		if(c[i]!=c[n-i+1])
		ans2+=min(a[i],a[n-i+1]);
	}
	ans2/=2;
	cout<<ans+ans2;
	return 0;
}
