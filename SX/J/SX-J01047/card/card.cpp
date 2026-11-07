#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m;
const int N = 5e5 + 10;
int a[N], ans[N], stk[N], head;

//十年OI一场空 不开longlong见祖宗
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	int A = 1;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] < a[i - 1])
			A = 0;
	}
	if (A) {
		for (int i = 1; i <= n; i ++) {
			if (a[i] != a[i + 1]) {
				ans[a[i]] = i;
			}
		}
		for (int i = 1; i <= m; i ++) {
			cout << ans[i] << endl;
		}
		return 0;
	}
	head = 0;
	for (int i = 1 ; i <= n; i ++) {
		head = 0;
		for (int j = i; j <= n; j ++) {
			stk[++ head] = a[j];
			for (int z = 1; z < head; z ++) {
				if (stk[z] == a[j]) {
					head = z;
					break;
				}
			}
		}
		for (int j = 1; j <= head; j ++) {
			ans[stk[j]] ++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
