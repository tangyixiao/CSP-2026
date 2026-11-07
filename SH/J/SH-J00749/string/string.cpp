#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int s[200200];
char c[200200];
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++) cin >> s[i] >> c[i];
	int l = 1,r = n;
	int ans = 0;
	while(l < r) {
		if(c[l]==c[r]) {
			if(s[l]<s[r]) {
				s[r]-=s[l];
				l++;
			}else if(s[l]>s[r]) {
				s[l]-=s[r];
				r--;
			}else {
				l++;
				r--;
			}
		}else {
			if(s[l]<s[r]) {
				s[r]-=s[l];
				ans += s[l];
				l++;
			}else if(s[l]>s[r]) {
				s[l]-=s[r];
				ans += s[r];
				r--;
			}else {
				ans += s[l];
				l++;
				r--;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
