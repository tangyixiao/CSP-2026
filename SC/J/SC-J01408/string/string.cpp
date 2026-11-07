#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <stack>
#define int long long
#define F(i, n, m) for(int i = n; i <= m; i++)
#define dF(i, n, m) for(int i = n; i >= m; i--)
using namespace std;
using ll = long long;
using ull = unsigned long long;

int const N = 2e5 + 5;
int a[N];
char c[N];

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
//	freopen("string6.in", "r", stdin);

	int n, sum = 0;
	cin >> n;
	F(i, 1, n) {
		cin >> a[i] >> c[i];
		sum += a[i];
	}
	int li = 1, ri = n, num = 0;
	while(1) {
//		cout << num << ' ' << li << ' ' << ri << '\n';
		if(li >= ri) break;
		if(c[li] != c[ri]) {
			num += min(a[li], a[ri]);
		}
		if(a[li] > a[ri]) {
			a[li] -= a[ri];
			a[ri--] = 0;
		}else if(a[li] < a[ri]){
			a[ri] -= a[li];
			a[li++] = 0;
		}else {
			a[li++] = a[ri--] = 0;
		}
	}
	
	cout << num;

	return 0;
}