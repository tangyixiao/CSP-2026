#include <iostream>
#include <string>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	string a;
	long long n, b, s = 0;
	string c;
	cin >> n;
	for (long long i = 0; i < n; i++) {
		cin >> b >> c;
		for (long long j = 0; j < b; j++) {
			a += c;
		}
	}
	for (long long i = 0; i < a.size() / 2; i++) {
		if (a[i] != a[a.size() - 1 - i])
			s++;
	}
	cout << s;
	return 0;
}