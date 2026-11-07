#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int n,cnt;
struct node {
	int num;
	char c;
}a[200005];
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for(int i = 1;i <= n;i++) {
		cin >> a[i].num >> a[i].c;
	}
	int l = 1,r = n;
	while(l < r) {
		if(a[l].c == a[r].c) {
			if(a[l].num == a[r].num) {
				l ++;
				r --;
			}else if(a[l].num > a[r].num) {
				a[l].num -= a[r].num;
				r --;
			}else if(a[l].num < a[r].num) {
				a[r].num -= a[l].num;
				l ++;
			}
		}else{
			if(a[l].num == a[r].num) {
				cnt += a[l].num;
				l ++;
				r --;
			}else if(a[l].num > a[r].num) {
				cnt += a[r].num;
				a[l].num -= a[r].num;
				r --;
			}else if(a[l].num < a[r].num) {
				cnt += a[l].num;
				a[r].num -= a[l].num;
				l ++;
			}
		}
	}
	cout << cnt;
	return 0;
}