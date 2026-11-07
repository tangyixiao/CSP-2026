#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int n;
long long ans, a[N], p[N], s[N];
char c[N];
int main(){
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1;i <= n;i++) cin >> a[i] >> c[i];
	int l = 1, r = n;
	long long s1 = 0, s2 = 0;
	while(l <= r){
		if (a[l] < a[r]){
			s1 += a[l], s2 += a[l];
			if (c[l] != c[r]) ans += a[l];
			a[r] -= a[l];
			l++;
		}else if (a[l] > a[r]){
			s1 += a[r], s2 += a[r];
			if (c[l] != c[r]) ans += a[r];
			a[l] -= a[r];
			r--;
		}else{
			s1 += a[l], s2 += a[r];
			if (c[l] != c[r]) ans += a[l];
			l++, r--;
		}
	}
	cout << ans;
	return 0;
}