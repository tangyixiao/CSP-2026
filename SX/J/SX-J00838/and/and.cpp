#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m;
ll a[200010];
ll mx;

bool cmp(ll x, ll y) {
	return x > y;
}

void mis1() { //当m=1时,选最大值
	sort(a + 1, a + n + 1);
	cout << a[n];
}

void misn() { //当m=n时,求所有a[i]相与的值
	mx = a[1];
	for (int i = 1; i <= n; i++) {
		mx &= a[i];
	}
	cout << mx;
}

void mis2() { //当m=2时,求两个a[i]相与最大值
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			mx = max(mx, a[i] & a[j]);
		}
	}
	cout << mx;
}

bool A() { //判断A需满足a[i]+1为2^ki
	bool flag = 1;
	for (int i = 1; i <= n; i++) {
		a[i] += 1;
		if (a[i] & (~a[i])) {
			flag = 0;
		}
	}
	for (int i = 1; i <= n; i++) {
		a[i] -= 1;
	}
	return flag;
}

void workA() { //求a[i]中第m大的值
	sort(a + 1, a + n + 1, cmp);
	cout << a[m];
}


bool B() { //判断B需满足n为2^k
	if ((n & (~n) ) == 0) {
		return 1;
	}
	return 0;
}

void workB() { //求a[i]中第m大的值
	sort(a + 1, a + n + 1, cmp);
	cout << a[m];
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) { //当m=1时,选最大值
		mis1();
		return 0;
	}
	if (m == n) { //当m=n时,求所有a[i]相与的值
		misn();
		return 0;
	}
	if (m == 2) { //当m=2时,求两个a[i]相与最大值
		mis2();
		return 0;
	}
	if (A()) { //当满足A时,每个a[i]都全是1->求a[i]中第m大的值
		workA();//求a[i]中第m大的值
		return 0;
	}
	if (B()) { //当满足B时,a[1]~a[n]等差，公差1->求a[i]中第m大的值
		workB();//求a[i]中第m大的值
		return 0;
	}
	return 0;
}