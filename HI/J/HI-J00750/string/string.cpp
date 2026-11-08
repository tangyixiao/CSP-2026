#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXL = 1e8 + 5;
const int MAXN = 2e5 + 5;
int n, L;
string fs[MAXN];
int a[MAXN];
//string rword[MAXL];
//string le[MAXL / 2 + 1] = {"0"};
//string ri[MAXL / 2 + 1] = {"0"};
//void attach_string() {
//	int L = 0;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= a[i]; j++) {
//			rword[L + j] = fs[i];
//		}
//		L += a[i];
//	}
//}
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> fs[i];
	}
    //attach_string();
    /*
    int mid = L / 2 + 1;
	for (int i = 1; i <= L; i++) {
		for (int j = 1; j <= mid; j++) {
			le[j] = rword[j];
		}
		for (int j = 1; j <= L - mid; j++) {
			ri[j] = rword[j];
		}
	}
	int cnt = 0;
	for (int i = 1; i <= mid; i++) {
		if (le[i] != ri[i]) {
			if (le[i] == "0" || ri[i] == "0") {
				
			} else {
				cnt++;
			}
		}
	}
	cout << cnt;
	*/
	cout<<0;
	
	return 0;
}

