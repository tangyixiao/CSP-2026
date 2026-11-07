#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define rep(i, l, r) for(int i = l; i <= r; i++)
#define req(i, r, l) for(int i = r; i >= l; i--)
using namespace std;
int rd() {
	int res = 0, f = 1; char ch;
	while(!isdigit(ch)) { if(ch == '-') f = -1; ch = getchar(); }
	while(isdigit(ch)) { res = (res << 3) + (res << 1) + (ch ^ 48); ch = getchar(); }
	return res * f;
}
string s1, c1, s2, c2;
int main() {
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
	cin >> s1 >> c1 >> s2 >> c2;
	if(s1 != s2) cout << "0000\n";
	else {
		if(c1[1] != c2[1] || c1[0] != c2[0]) cout << "1000\n";
		else {
			char p1 = c1[2], p2 = c2[2];
			if(p1 > p2) swap(p1, p2);
			if(p1 <= 'C' && p2 >'C') cout << "1100\n";
			else {
				if((p1 == 'A' && p2 == 'B') || (p1 == 'B' && p2 == 'C') || (p1 == 'D' && p2 == 'E')) cout << "1111\n";
				else cout << "1110\n";
			}
		}
	}
	return 0;
}