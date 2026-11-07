#include <bits/stdc++.h>
using namespace std;


long long f(int n) {
	int num = 1;
	for (int i = 1; i <= n; i++) {
		num *= 2;
	}
	return num;
}

string huiwen(string s) {
	int l = s.size();
	for (int i = 0; i <= l / 2 - 1; i++) {
		char c = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = c;
	}
	return s;
}

string long_string_2(long long n) {
	string s;
	if (n == 0)
		s = "0";
	while (n > 0) {
		s += n % 2 + '0';
		n /= 2;
	}
	return huiwen(s);
}

long long string_long_2(string s) {
	long long n = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '1') {
			n += f(s.size() - i - 1);
		}
	}
	return n;
}

bool cmp(long long n1, long long n2) {
	if (n1 < n2)
		return 0;
	return 1;
}

string And (string s1, string s2) {
	string s;

	if (s1.size() > s2.size())
		s1.erase(0, s1.size() - s2.size());
	if (s2.size() > s1.size())
		s2.erase(0, s2.size() - s1.size());

	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] - '0' == 1 && s2[i] - '0' == 1) {
			s += '1';
		} else
			s += '0';
	}

	return s;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n = 0, m = 0;
	cin >> n >> m;
	long long num[200005] = {0};
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num, num  + n, cmp);

	string s_ = long_string_2(num[0]);
	for (int i = 1; i <= m - 1; i++) {
		s_ = And(s_, long_string_2(num[i]));
	}



	cout << string_long_2(s_);


	fclose(stdin);
	fclose(stdout);
	return 0;
}
