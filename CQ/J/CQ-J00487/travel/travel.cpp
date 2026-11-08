#include <bits/stdc++.h>
#define re read()
#define wr(x) write(x)
#define sp putchar(' ')
#define endl puts("")

const int N = 5e5 + 10, INF = 0x3f3f3f3f;

using namespace std;

int read() {
	int y = 0, f = 1;
	char c = getchar();
	while (c < '0' || c > '9') f = c == '-' ? -1 : f, c = getchar();
	while (c >= '0' && c <= '9') y = (y << 1) + (y << 3) + (c ^ 48), c = getchar();
	return y * f; 
} 

void write(int x) {
	if (x < 0) x = -x, putchar('-');
	if (x > 9) write(x / 10);
	putchar(x % 10 + 48);
}

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, x, y;
	cin >> a >> b >> x >> y;
	puts(a == x ? b.substr(0, 2) == y.substr(0, 2) ? (b.back() <= 'C' && y.back() <= 'C') || (b.back() >= 'D' && y.back() >= 'D') ? abs(b.back() - y.back()) == 1 ? "1111" : "1110" : "1100" : "1000" : "0000");
}
