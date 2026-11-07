#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+10;
const int M = 3e5+10;
int find(vector<int> desk, int k) {
	int n = desk.size();
	for (int i = 0; i < n; i++) {
		if (desk[i] == k)
			return i;
	}
	return -1;
}
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	vector<int> cards(N, 0);
	vector<int> desk(N, 0);
	vector<int> erase(N, 0);
	vector<int> ans(M, 0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> cards[i];
	}
	for (int i = 1; i <= n; i++) {
		desk = {};
		for (int j = i; j <= n; j++) {
			int k = cards[j];
			if (find(desk, k) == -1)
				desk.push_back(k);
			else {
				desk.erase(desk.begin() + find(desk, k), desk.end());
				desk.push_back(k);
			}
		}
		for (int j = 1; j <= m; j++) {
			if (find(desk, j) != -1)
				ans[j]++;
		}
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << " ";
	return 0;
}
