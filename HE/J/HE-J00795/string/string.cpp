#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
struct node{
	long long len;
	char s;
}a[N];
int n;
long long ans = 0;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for(int i = 1; i <= n; ++i) cin >> a[i].len >> a[i].s;
	int l = 1, r = n;
	while(l < r){
		int l1 = min(a[l].len, a[r].len);
		if(a[l].s != a[r].s) ans += l1;
		a[l].len -= l1;
		a[r].len -= l1;
		if(a[l].len == 0) l++;
		if(a[r].len == 0) r--;
	}
	cout << ans;
	return 0;
}
