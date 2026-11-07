#include <fstream>
#include <algorithm>

std::ifstream fin("string.in");
std::ofstream fout("string.out");
using ll = long long;
int n;
ll times[200005] = {0};
char c[200005] = {0};
int l, r;
int in_l = 0, in_r = 0;
ll ans = 0;

int main() {
	fin >> n;
	for (int i = 0; i < n; ++i) {
		fin >> times[i] >> c[i];
//		std::cout << times[i] << ' ' << c[i] << "\n";
	}
	l = 0;
	r = n - 1;
	in_r = times[n - 1] - 1;
	while (l < r || (l == r && in_l <= in_r)) {
//		std::cout << l << ' ' << r << ' ' << in_l << ' ' << in_r << "\n";
		int move_l = times[l] - in_l;
		int move_r = in_r + 1;
		int move = std::min(move_l, move_r);
		if (c[l] != c[r]) ans += (ll)move;
		in_l += move;
		in_r -= move;
		if (in_l >= times[l]) {
			l++;
			in_l = 0;
		}
		if (in_r < 0) {
			r--;
			in_r = times[r] - 1;
		}
	}
	fout << ans;
}
