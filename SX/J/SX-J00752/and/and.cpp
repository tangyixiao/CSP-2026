#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long u64;

struct jud {
	u64 xua;
	u64 bu;
	u64 x_n = 0;
	u64 b_n = 0;
	u64 x_k = 0;
	u64 b_k = 0;
} sha, zhe;
u64 sta = 0b1111111111111111111111111111111111, res = 0;

int main() {
#ifndef _DEBUG
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
#endif
	u64 n, m, xxx;
	bool fir = true;
	scanf("%llu %llu", &n, &m);
	sha.bu = sta;
	sha.xua = sta;
	while (n--) {
		scanf("%llu", &xxx);

		//ฒปัก
		if (sha.bu >= sha.xua) {
			zhe.bu = sha.bu;
			zhe.b_n = sha.b_n;
			zhe.b_k = sha.b_k;
		} else {
			zhe.bu = sha.xua;
			zhe.b_n = sha.x_n;
			zhe.b_k = sha.x_k;
		}

		if (sha.bu == sha.xua && !fir)
			zhe.b_k++;
		//ัก
		if ((sha.bu & xxx) >= (sha.xua & xxx) && sha.b_n + 1 <= m) {
			zhe.xua = sha.bu &xxx;
			zhe.x_n = sha.b_n + 1;
			zhe.x_k = sha.b_k;
		} else if (sha.x_n + 1 <= m) {
			zhe.xua = sha.xua &xxx;
			zhe.x_n = sha.x_n + 1;
			zhe.x_k = sha.x_k;
		}
		if ((sha.bu & xxx) == (sha.xua & xxx) && !fir && sha.b_n + 1 <= m && sha.x_n + 1 <= m)
			zhe.x_k++;
		//zhe.b_n = sha.b_n;
		//zhe.x_n = sha.x_n + 1;
		//zhe.bu = max(sha.bu, sha.xua);
		//zhe.xua = max(sha.bu &xxx, sha.xua &xxx);
		if (zhe.b_n <= m && zhe.b_n + zhe.b_k >= m)
			res = max(res, zhe.bu);
		if (zhe.x_n <= m && zhe.x_n + zhe.x_k >= m)
			res = max(res, zhe.xua);
		sha = zhe;
		fir = false;
	}
	printf("%llu\n", res);
	return 0;
}