#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MAXN = 2*1e5+5;
int n,a[MAXN],c[MAXN],m1[MAXN],m2[MAXN],ans;
char tmp;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 1;i<=n;i++){
		cin >> a[i];
		m1[i] = m1[i-1] + a[i];
		cin >> tmp;
		c[i] = tmp - 'a';
	}
	for (int i = n;i>=1;i--){
		m2[i] = m2[i+1] + a[i];
	}
	int l = 1,r = n;
	while (l<r){
		if (c[l] != c[r]){
			ans += min(m1[l],m2[r]) - max(m1[l-1],m2[r+1]);
		}
		if (m1[l] <= m2[r]){
			l++;
		}else{
			r--;
		}
	}
	cout << ans;
	return 0;
} 
