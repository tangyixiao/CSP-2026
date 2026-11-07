#include <bits/stdc++.h>
#define int long long
using namespace std;

int length, source;
int values[1 << 20];
int targets[1 << 20], ptr;
int currents[1 << 20];
int results[1 << 20];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
//	cin.exceptions(ios::badbit | ios::failbit);
	
	cin >> length >> source;
	
	for (int current = 1; current <= length; current++) cin >> values[current];
	
	if (length <= 5000) {
		for (int left = 1; left <= length; left++) {
			ptr = 1;
			for (int current = 1; current <= source; current++) currents[current] = -1;
			for (int current = left; current <= length; current++) {
				int value = values[current];
				if (currents[value] != -1) {
					ptr = currents[value] + 1;
				}
				else {
					targets[ptr] = value;
					currents[value] = ptr++;
				}
			}
			for (int current = 1; current < ptr; current++) results[targets[current]]++;
//			for (int current = 1; current < ptr; current++) cerr << targets[current] << " \n"[current == ptr - 1];
//			for (int current = 1; current <= source; current++) cerr << currents[current] << " \n"[current == source];
//			cerr << '\n';
		}
		for (int current = 1; current <= source; current++) cout << results[current] << ' ';
	}
	
	return 0;
}