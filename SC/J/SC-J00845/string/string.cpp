#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MAXN = 2 * 1e5 + 5;
int num[MAXN];
char x[MAXN];
string a;
int n;
char qlp(int r) {
	int lei = 0;
	int lei2 = 0;
	for(int i = 1;i <= n; ++i) {
		lei2 += num[i];
		if(lei < r && r <= lei2) {
			return x[i];
		}
		lei += num[i];
	}
}
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int kop = 0;
	cin >> n;
	for(int i = 1;i <= n; ++i) {
		cin >> num[i] >> x[i];
		kop += num[i];
	}
	int ji = 0;
	int minn = 2e9;
	if(kop % 2 == 1) {
		int kai = kop / 2 + 2;
		for(int i = kai; i <= kop; ++i) {
			int j = n - i + 1;
			if(qlp(i) != qlp(j)) {
				ji++;
			}
		}
		minn = min(ji, minn);
		ji = 0;
		kai = 1;
		int jie = kop / 2;
		for(int i = kai;i <= jie; ++i) {
			int j = n - i + 1;
			if(qlp(i) != qlp(j)) {
				ji++;
			}
		}
		minn = min(ji, minn);
	}
	else {
		int kai = 1;
		int jie = kop / 2;
		for(int i = kai;i <= jie; ++i) {
			int j = i + jie;
			if(qlp(i) != qlp(j)) {
				ji++;
			}
		}
		minn = min(ji, minn);
		ji = 0;
		kai = jie + 1;
		for(int i = kai; i <= kop; ++i) {
			int j = i - jie; 
			if(qlp(i) != qlp(j)) {
				ji++;
			}
		}
		minn = min(ji, minn);
	}
	cout << minn;
	return 0;
} 