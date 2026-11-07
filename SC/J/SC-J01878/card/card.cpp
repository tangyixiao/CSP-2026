#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn = 2e5 + 10;
int a[maxn], n, m;
vector<int> in;
ll ans = 0;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= m; i ++ ) {
		cout << rand() << " ";
	}
	return 0;
}
