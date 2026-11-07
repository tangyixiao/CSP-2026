#include <bits/stdc++.h>
using namespace std;
long long n;
const int N = 2e5+2000;
pair<long long, char> p[N];
long long sum;

int main() {
	//freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p[i].first >> p[i].second;
	}

	long long i = 1;
	long long j = n;
	while (i != j) {

		if (p[i].second == p[j].second) {
			if (p[i].first >= p[j].first) {
				p[j].first = -1;
				j--;
				p[i].first = p[i].first - p[j].first;

			} else {
				i++;
			}
		} else {
			if (p[i].first >= p[j].first) {
				p[j].first = -1;
				j--;
				p[i].first = p[i].first - p[j].first;
				sum += p[j].first;

			} else {
				i++;
			}
		}
		if (p[i].first == 0 ) {
			i++;
		}
		if (p[j].first == 0 ) {
			j--;
		}
	}
	cout << sum;
	return 2;
}
