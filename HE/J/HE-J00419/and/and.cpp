#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+10;
int n,m,a[N],t[N];
bool allless4 = 1,allpow2m1 = 1;
void test1() { 
	if(t[4] >= m) cout << 4;
	else if(t[3] + t[1] >= m) cout << 3;
	else if(t[2] + t[3] >= m) cout << 2;
	else if(t[1] >= m) cout << 1;
	else cout << 0; 
}
signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) {
		cin >> a[i];
		if(a[i] <= 4) t[a[i]]++;
		else allless4 = 0;
		if((a[i]&(a[i]+1)) != 0)  {
			allpow2m1 = 0;
		}
	}
	cout << allpow2m1 << '\n';
	if(n <= 20) {
		int ans = 0;
		for(int s = 1;s < (1<<n);s++) {
			int cur = (1<<22)-1,cnti = 0;
			for(int j = 1;j <= n;j++){
				if(s&(1<<(j-1))) {
					cur &= a[j];
					cnti++;
				}
			}
			if(cnti == m) ans = max(ans,cur);
		}
		cout << ans;
	}
	else {
		sort(a+1,a+n+1);
		if(m == 1) cout << a[n];
		else if(m == n) {
			int ans = 1<<22;
			for(int i = 1;i <= n;i++) ans &= a[i];
			cout << ans;
		} 
		else if(m == 2) {
			int ans = 0;
			for(int i = 1;i <= n;i++) {
				for(int j = i+1;j <= n;j++) ans = max(ans,a[i]&a[j]);
			}
			cout << ans;
		}
		else if(allless4) test1();
		else if(allpow2m1) cout << a[n-m+1];
	}
	return 0;
}
