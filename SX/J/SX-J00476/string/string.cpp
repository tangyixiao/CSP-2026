#include <bits/stdc++.h >
using namespace std;
long long n;

struct fun {
	long long gs;
	char zl;
} a[1000010];

bool cmp(fun A, fun B) {
	return A.gs > B.gs;
}

int main() {
	//freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[0].gs >> a[0].zl;
	}
	cout << 0;
}
