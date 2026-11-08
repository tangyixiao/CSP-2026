#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 1030;
int n , a[N];
char c[N];
int i , j , step;
void same() {
	int com = min(a[i] , a[j]);
	if (a[i] > a[j]) {
		j--;
		a[i] -= com;
	} else if (a[i] == a[j]) {
		i++;
		j--;
	} else {
		i++;
		a[j] -= com;
	}
}
void diff() {
	int com = min(a[i] , a[j]);
	if (a[i] > a[j]) {
		j--;
		a[i] -= com;
	} else if (a[i] == a[j]) {
		i++;
		j--;
	} else {
		i++;
		a[j] -= com;
	}
	step += com;
}

signed main () {
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	cin >> n;
	for (int t = 1 ; t <= n ; t++) {
		cin >> a[t] >> c[t];
	}
	i = 1 , j = n;
	while (i < j) {
		if (c[i] == c[j]) same();
		else diff();
	}
	cout << step;
	return 0;
}

