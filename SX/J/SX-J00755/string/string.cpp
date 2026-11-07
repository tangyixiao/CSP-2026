#include <bits/stdc++.h>
using namespace std;
int  n, number[200001], num[200001], r, l = 1;
long long sum;
char lever[200001];
int flagl, flagr;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> number[i] >> lever[i];
	}
	flagr = n;
	flagl = 1;
	while (flagl <= flagr) {
		if (lever[flagl] != lever[flagr]) {
			sum += min(number[flagl], number[flagr]);
			if (number[flagl] > number[flagr]) {
				number[flagl] -= number[flagr];
				flagr--;
			} else if (number[flagl] < number[flagr]) {
				number[flagr] -= number[flagl];
				flagl++;
			} else if (number[flagl] == number[flagr]) {
				number[flagr] = 0;
				number[flagl] = 0;
				flagl++;
				flagr--;
			}
		} else if (lever[flagl] == lever[flagr]) {
			if (number[flagl] > number[flagr]) {
				number[flagl] -= number[flagr];
				flagr--;
			} else if (number[flagl] < number[flagr]) {
				number[flagr] -= number[flagl];
				flagl++;
			} else if (number[flagl] == number[flagr]) {
				number[flagr] = 0;
				number[flagl] = 0;
				flagl++;
				flagr--;
			}
		}
	}
	cout << sum;
	return 0;
}
