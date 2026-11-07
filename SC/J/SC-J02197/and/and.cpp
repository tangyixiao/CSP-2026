#include <iostream>
#include <cmath>
using namespace std;
#define int long long
const int N = 2e5 + 10;

int t2[N][32], q = 0, num[N];
void to_2(int x) {
	int l = 31;
	while(x) {
		t2[q][l] = x % 2;
		x /= 2;
		l--;
	}
	q++;
}

void solve() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i ++) {
		cin >> num[i];
		to_2(num[i]);
    }
    int count = 0;
	for (int i = 1; i <= 31; ++ i) {
		int cnt = 0;
		for(int j = 0; j < n; ++ j) {
			if(t2[j][i] == 1 && num[j] != 0) cnt ++;
		}
		if(cnt >= m) {
			for(int j = 0; j < n; ++ j) {
		    	if(t2[j][i] == 0){
		    		num[j] = 0;
		    		count++;
				}
	    	}
		}
	}
	int ans = INT_MAX, sum = 0;
	for (int i = 0; i < n; ++ i) {
		if(num[i] != 0 && sum != m){
			ans = ans & num[i];
			sum ++;
		}
	}
	cout << ans;
}
signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int T = 1;
	//cin >> T;
	while(T--) {
		solve();
	}
}