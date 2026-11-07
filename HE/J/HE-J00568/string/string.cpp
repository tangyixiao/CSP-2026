#include <iostream>

using namespace std;

long long n, top = 1;
string s;


int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		long long a;
		char c;
		cin >> a >> c;
		int j = 1;
		while (j <= a) {
			s[top] = c;
			j++;
			top++;
		}
	}

	string t;
	for (int i = 1; i <= top - 1; i++) {
		t[i] = s[top - i];
	}
	/*for (int i = 1; i <= top - 1; i++) {
		cout << s[i];
	}*/
	long long ans = 0;
	for (int i = 1; i <= top - 1; i++) {
		if (s[i] != t[i])
			ans++;
	}
	cout << ans / 2;

	return 0;
}
