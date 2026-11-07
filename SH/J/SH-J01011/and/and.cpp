#include <bits/stdc++.h>
#include <bitset>
using namespace std;

const int maxn=200010;
int a[maxn],n,m,maxx,ans;
bool w[maxn];
bitset<31>s[maxn];

bool cmp(bitset<31>x,bitset<31>y) {
	if (x.count()==y.count()) return x.to_string()>y.to_string();
	return x.count()>y.count();
}
void f(int dep) {
	if (dep>n) {
		int cnt=0,tot=-1;
		for (int i=1;i<=n;i++) {
			if (w[i]) {
				cnt++;
				if (tot==-1) tot=a[i];
				else tot&=a[i];
			}
		}
		if (cnt==m) {
			ans=max(ans,tot);
		}
		return;
	}
	w[dep]=0; f(dep+1);
	w[dep]=1; f(dep+1);
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >>n>>m;
	for (int i=1;i<=n;i++) {
		cin >>a[i];
		s[i]=a[i];
	}
	if (n<=20) {
		f(1);
		cout <<ans<<endl; return 0;
	}
	if (m==1) {
		for (int i=1;i<=n;i++) {
			ans=max(ans,a[i]);
		}
		cout <<ans<<endl; return 0;
	}
	if (m==2) {
		for (int i=1;i<=n;i++) {
			for (int j=i;j<=n;j++) {
				ans=max(ans,(a[i]&a[j])); 
			}
		}
		cout <<ans<<endl; return 0;
	}
	if (m==n) {
		ans=a[1];
		for (int i=1;i<=n;i++) {
			ans&=a[i];
		}
		cout <<ans<<endl; return 0;
	}
	if (m==n-1) {
		sort(s+1,s+1+n,cmp);
		for (int i=1;i<=n-1;i++) {
			ans&=s[i].to_ulong();
		}
		cout <<ans<<endl; return 0;
	}
	f(1);
	cout <<ans<<endl;
	return 0;
}

