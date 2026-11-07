#include <bits/stdc++.h>
#define GC() getchar()
#define PC(x) putchar(x)
using namespace std;
typedef long long ll;

int Read() {
	int ans = 0, f = 1, c = GC();
	while (c < 48 || c > 57)
		f = (c == '-' ? -1 : 1), c = GC();
	while (c >= 48 && c <= 57)
		ans = (ans << 3) + (ans << 1) + (c - 48), c = GC();
	return ans * f;
}

void Write(int x) {
	if (x < 0)
		PC('-'), x = -x;
	if (x < 10) {
		PC(char(x + 48));
		return;
	}
	char ans[10];
	int len = 0;
	while (x) {
		ans[len++] = char(x % 10 + 48);
		x /= 10;
	}
	while (len--)
		PC(ans[len]);
	return;
}
string c1, s1, c2, s2, p1, p2;
char z1, z2;
int cnt = 4;

bool cmp(char a, char b) {
	return ((a == 'A' || a == 'B' || a == 'C') && (b == 'A' || b == 'B' || b == 'C')) || ((a == 'D' && a == 'E')
	        || (b == 'D' && b == 'E'));
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	p1 = s1[0] + s1[1];
	p2 = s2[0] + s2[1];
	z1 = s1[2];
	z2 = s2[2];
	if (c1 == c2) {
		PC('1');
		cnt--;
		if (p1 == p2) {
			PC('1');
			cnt--;
			if (cmp(z1, z2) || cmp(z2, z1)) {
				PC('1');
				cnt--;
				if (z1 != 'C' && z2 != 'D' && abs((z1 - '0') - (z2 - '0')) == 1) {
					PC('1');
					cnt--;
				}
			}
		}
	}
	while (cnt--)
		PC('0');
	return 0;
}