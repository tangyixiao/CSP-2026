#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[200005], c[200005];
int length(int a) {
	int cnt = 0;
	while (a) {
		a /= 2;
		cnt++;
	}
	return cnt; 
}
int s(int a) {
	int cnt = 0;
	while (a) {
		int cnt = 0;
		if (a % 2) cnt++;
		a /= 2;
	}
	return cnt;
}
bool cmp(int a, int b) {
	if (length(a) != length(b)) return length(a) > length(b);
	else return s(a) < s(b);	
}


int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1 ; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1, a+n+1, cmp);
	int ans = a[1];
	for (int i = 2; i <= m; i++) {
		ans &= a[i];
	}
	cout << ans;
	return 0;
}
