#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int input() {
	int x;
	cin >> x;
	return x;
}
struct node {
	int x;
	char c;
} a[200005], b1[200005], b2[200005];
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
    int t = input(), sum = 0, n = 0;
    for (int i = 1; i <= t; i ++) {
    	int x = input();
    	char c;
    	cin >> c;
    	if (a[n].c == c) a[n].x += x;
    	else a[++ n] = {x, c};
    	sum += x;
    }
    sum = sum / 2 + sum % 2;
   	int sum1 = 0, n1 = 1, t2 = 0;
   	while (sum1 < sum) {
    	if (sum1 + a[n1].x >= sum) {
    		t2 = sum - sum1;
    		n1 --;
   			sum1 = sum;
    		break;
		}
		sum1 += a[n1].x;
		n1 ++;
	}
	for (int i = 1; i <= n1; i ++) b1[i] = a[i];
	b1[++ n1] = {t2, a[n1].c};
//	for (int i = 1; i <= n1; i ++) cout << b1[i].x << " " << b1[i].c << endl;
	for (int i = n; i > n1; i --) b2[n - i + 1] = a[n];
//	cout << a[n].x << " " << a[n].c << endl;
//	cout << a[n1].x << endl;
	cout << endl;
	b2[n1 + 1] = {a[n1].x - t2, a[n1].c};
//	for (int i = 1; i <= n1 + 1; i ++) cout << b2[i].x << " " << b2[i].c << endl;
	int id = 0, ans = 0, x = 1, y = 1;
	while (true) {
		if (a[x].x > a[y].x && a[y].x) {
			if (a[x].c != a[y].c) ans += a[y].x - id;
			id = a[y].x, y ++; 
		} else if (a[x].x) { 
			if (a[x].c != a[y].c) ans += a[x].x - id;
			id = a[x].x, x ++;
		} else {
			y ++;
		}
		if (!a[x].x && !a[y].x) break;
	}
	cout << ans;
	return 0;
}

