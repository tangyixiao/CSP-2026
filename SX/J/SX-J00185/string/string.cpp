#include <bits/stdc++.h>
using namespace std;
int n, a, cnt;
string str, tmp, hastro, hastre;

int haint(int len) {
	if (len % 2 != 0)
		return len / 2 + 1;
	else
		return len / 2;
}

int hainto(int leno) {
	return leno - haint(leno);
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> tmp[i];
		for (int j = 0; j < a; j++) {
			str = str + tmp[i];
		}
	}

	string copy = str;
	reverse(str.begin(), str.end());

	for (int i = 0; i < hainto(copy.length()); i++) {
		hastro += copy[i];
	}
	for (int i = hainto(str.length()); i > 0; i--) {
		hastre += str[i];
	}

	if (copy == str) {
		cout << 0;
		return 0;
	} else {
		for (int i = 0; i < hastro.length(); i++) {
			if (hastro[i] != hastre[i])
				cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
	fclose(stdin);
	fclose(stdout);
}