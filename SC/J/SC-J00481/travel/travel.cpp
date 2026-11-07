#include <bits/stdc++.h>
using namespace std;

#define int long long

void fp() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
}

#define gc getchar

int read() {
	int x = 0, f = 1;
	char ch = gc();
	while (ch < '0' || ch > '9') {
		if (ch == '-')
			f = -f;
		ch = gc();
	}
	while (ch >= '0' && ch <= '9') {
		x = (x << 1) + (x << 3) + (ch ^ 48);
		ch = gc();
	}
	return x * f;
}

string a, b, x, y;

string ans;

signed main() {
	fp();
	
	cin >> a >> b >> x >> y;
	
//	cout << b[2] << ' ' << y[2] << '\n';
	
	if (a == x)
		ans = "1";
	else 
		return cout << "0000", 0;
	
	if (ans == "1" && b[0] == y[0] && b[1] == y[1])
		ans = "11"/*, cout << "---1---\n"*/;
	
	else
		return cout << "1000", 0;
	
//	cout << "--------\n";
	
	if (ans == "11") {
		char c1 = b[2], c2 = y[2];
		int a1 = c1 - 'A', a2 = c2 - 'A';
		
		if (a1 <= 2 && a2 <= 2)
			ans = "111"/*, cout << "---1---\n"*/;
		
		else if (a1 > 2 && a2 > 2)
			ans = "111"/*, cout << "---1---\n"*/;
		
		else
			return cout << "1100", 0;
	}
	
//	cout << "--------\n";
	
	if (ans == "111") {
		char c1 = b[2], c2 = y[2];
		int a1 = c1 - 'A', a2 = c2 - 'A';
		
//		cout << "----i----\n";
		
		if (a1 <= 2 && a2 <= 2) {
			if (abs(a1 - a2) == 1)
				return cout << "1111", 0;
			else
				return cout << "1110", 0;
		}
		
		else
			return cout << "1111", 0;
	}
	
//	cout << "--------\n";
	
	return 0;
}