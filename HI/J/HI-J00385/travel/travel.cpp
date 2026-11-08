#include <bits/stdc++.h>
#define ll long long
#define rep(i, a, b) for(int i = (a); i <= (b); i++)
#define bep(i, a, b) for(int i = (a); i >= (b); i--)
using namespace std;
string c1, s1, c2, s2;
//两张车票对应的座位是否在同一节车厢
bool check1(string a, string b) {
	if(a == b) {
		return 1;
	}
	return 0;
}
//两张车票对应的座位是否在同一节车厢的同一排
bool check2(string a, string b) {
	string x, y;
	if(a[0] + a[1] == b[0] + b[1]) {
		return 1;
	}
	return 0; 
}
//两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧
bool check3(string a, string b) {
	char x = a[2], y = b[2];
	if((x == 'A' || x == 'B' || x == 'C') && (y == 'A' || y == 'B' || y == 'C')) {
		return 1;
	}
	if((x == 'D' || x == 'F') && (y == 'D' || y == 'F')) {
		return 1;
	}
	return 0;
}
//两张车票对应的座位是否相邻
bool check4(string a, string b) {
	char x = a[2], y = b[2];
	if(char(x + 1) == y && x != 'C') {
		return 1;
	}
	if(char(y + 1) == x && y != 'C') {
		return 1;
	}
	return 0;
}
int main() { 
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if(!check1(c1, c2)) {
		cout << "0000\n";
		return 0;
	}
	cout << "1";
	if(!check2(s1, s2)) {
		cout << "000\n";
		return 0;
	}
	cout << "1";
	if(!check3(s1, s2)) {
		cout << "00\n";
		return 0;
	}
	cout << "1";
	if(!check4(s1, s2)) {
		cout << "0\n";
		return 0;
	}
	cout << "1\n";
	return 0;
}
