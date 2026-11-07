#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];
bool use[200010];
long long ans = 0;


int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) {
		cin >> a[i];
	}
	sort(a + 1,a + 1 + n);
	if(m == 1) {
		cout << a[n] << endl;
	} else if(m == 2) {
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= n;j++) {
				if(i != j) {
					long long x = a[i] & a[j];
					ans = max(ans,x);
				}
			}
		}
		cout << ans << endl;
	} else if(m == n) {
		ans = a[1];
		for(int i = 2;i <= n;i++) {
			ans &= a[i];
		}
		cout << ans << endl;
	}
	for(int p= 1;p <= n;p++) {
		ans = a[p];
		memset(use,false,sizeof(use));
		use[p] = true;
		for(int step = 2;step <= m;step++) {
			long long x = 0;
			int id = 0;
			for(int i = 1;i <= n;i++) {
				if(!use[i]) {
					if((ans & a[i]) > x) {
						x = ans & a[i];
						id = i;
					}
				}
			}
			ans = x;
			use[id] = true;
		}
	}
	cout << ans << endl;
	return 0;
}
