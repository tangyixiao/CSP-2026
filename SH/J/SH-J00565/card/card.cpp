#include <iostream>
#include <fstream>
#include <queue>
#include <set>
#include <map>

std::ifstream fin("card.in");
std::ofstream fout("card.out");
int n, m;
int a[500005];
bool ans[500005] = {0};
std::map<int, bool> on_table;
std::queue<int> hand;

int main() {
	fin >> n >> m;
	for (int i = 0; i < n; ++i) {
		fin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		for (int j = i; j < n; ++j) {
			hand.push(a[i]);
		}
		while (!hand.empty()) {
			if (!on_table.count(hand.front())) {
				on_table[hand.front()] = 1;
			} else {
				for (auto x : on_table) {
					x.second = 0;
				}
				on_table[hand.front()] = 1;
			}
			hand.pop();
		}
		for (auto x : on_table) {
			if (x.second) ans[x.first] = 1;
		}
	}
	for (int i = 0; i < m; ++i) {
		fout << ans[i] << ' ';
	}
}
