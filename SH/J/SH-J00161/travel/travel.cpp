#include <bits/stdc++.h>
using namespace std;
int a, b, m, n;
char x, y;
int trans(char a){
	if (a == 'A') return 1;
	if (a == 'B') return 2;
	if (a == 'C') return 3;
	if (a == 'D') return 5;
	if (a == 'F') return 6;
}
bool side(int a, int b){
	if ((a > 4 && b > 4) || (a < 4 && b < 4)) return 1;
	return 0;
}
bool nextto(char x, char y){
	if (x > y) swap(x, y);
	if ((y == 'B') && (x == 'A')) return 1;
	if ((y == 'C') && (x == 'B')) return 1;
	if ((y == 'F') && (x == 'D')) return 1;
	return 0;
}
int main(){
	cin.tie(0), cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	scanf("%2d %2d%c %2d %2d%c", &a, &m, &x, &b, &n, &y);
	if (a == b){
		cout << 1;
		if (m == n){
			cout << 1;
			if (side(trans(x), trans(y))){
				cout << 1;
				if (nextto(x, y)) cout << 1;
				else cout << 0;
			}
			else cout << "00";
		}
		else cout << "000";
	}
	else cout << "0000";
	return 0;
}
