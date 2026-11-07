#include <iostream>
#include <fstream>
#include <algorithm>

std::ifstream fin("and.in");
std::ofstream fout("and.out");
int n, m;
int dp[2005][2005] = {0};
int a[2005] = {0};
int chosen[2005];
int chosen_num = 0;
int ans = 0;


int look_for(int lim, int col, int val) {
	int max = 0;
	for (int i = 0; i <= lim; ++i) {
		max = std::max((dp[i][col] & val), max);
	}
	return max;
}

int main() {
	fin >> n >> m;
	for (int i = 0; i < n; ++i) {
		fin >> a[i];
	}
	dp[0][1] = a[0];
	for (int i = 1; i < n; ++i) {
//		std::cout << a[i] << "  ";
		dp[i][1] = std::max(a[i], dp[i - 1][1]);
		for (int j = 2; j <= m; ++j) {
			dp[i][j] = std::max(dp[i - 1][j], look_for(i - 1, j - 1, a[i]));
//			std::cout << dp[i][j] << ' ';
		}
//		std::cout << "\n";
	}
	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j <= m; ++j) {
//			std::cout << dp[i][j] << ' ';
//		}
//		std::cout << "\n";
	}
	fout << dp[n - 1][m];
}
