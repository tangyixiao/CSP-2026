#include <bits/stdc++.h>
using namespace std;
long long r, a, mm;
//怎么这么难
int al;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> a >> r ;
	for (int i = 1; i <= a; i++) {

		cin >> al;
	}
	for (int i = 1; i <= r; i++)
		cout << abs(al * i - 67); //67刘福妻ⅥⅦ
	return 0;
}
