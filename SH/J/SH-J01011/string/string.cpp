#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

const int maxn=200010;
int n,a[maxn];
char c[maxn];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >>n;
	for (int i=1;i<=n;i++) {
		cin >>a[i]>>c[i];
	}
	int l=1,r=n,left=a[1],right=a[n];
	ll ans=0;
	while (l<r) {
		if (left<right) {
			if (c[l]!=c[r])
				ans+=left;
			right-=left;
			left=a[++l];
		} else if (left>right) {
			if (c[l]!=c[r])
				ans+=right;
			left-=right;
			right=a[--r];
		} else {
			if (c[l]!=c[r])
				ans+=left;
			left=a[++l];
			right=a[--r];
		}
	}
	cout <<ans<<endl;
	return 0;
}

