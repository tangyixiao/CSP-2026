#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#define int long long
using namespace::std;
const int N = 2e5 + 10;
class str {
	public:
		long long num;
		char c;
}chac[N];
int n;
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	for(int i = 1; i <= n; i++) {
		scanf("%lld", &chac[i].num);
		cin >> chac[i].c;
	}
	long long ans = 0;
	long long l = 1, r = n;
	long long llast = chac[l].num, rlast = chac[r].num;
	long long lwent = 0, rwent = 0;
	while(l < r) {
		if(llast < rlast) {
			lwent += llast;
			rwent += llast;
			if(chac[l].c != chac[r].c) ans += llast;
			rlast -= llast;
			l++;
			llast = chac[l].num;
		} else if(llast > rlast) {
			lwent += rlast;
			rwent += rlast;
			if(chac[l].c != chac[r].c) ans += rlast;
			llast -= rlast;
			r--;
			rlast = chac[r].num;
		} else if(llast == rlast) {
			lwent += llast;
			rwent += rlast;
			if(chac[l].c != chac[r].c) ans += llast;
			l++, r--;
			llast = chac[l].num;
			rlast = chac[r].num;
		}
//		if(chac[l].c != chac[r].c) {
//			if(chac[l].num < chac[r].num) {
//				llast = chac[r].num - chac[l].num;
//				ans += llast;
//				rlast = 0;
//				r++;
//			} else {
//				if(chac[l].num == chac[r].num) {
//					llast = 0;
//					rlast = chac[l].num - chac[r].num;
//					ans += rlast;
//					l++;
//				} else if(chac[l].num == chac[r].num) {
//					llast = 0;
//					rlast = 0;
//					l++, r++;
//				}
//			}
//		}
	}
	printf("%lld\n", ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
