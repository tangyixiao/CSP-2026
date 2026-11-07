#include <bits/stdc++.h>
using namespace std;
int card[500005];
queue<int> p;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> card[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (card[i] == card[j]) {
				for (int k = i; k <= j; k++) {
					card[k];
				}
			}
		}
	}


	return 0;
}