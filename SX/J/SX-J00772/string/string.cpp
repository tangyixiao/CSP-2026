#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int P = 2e5+5;
int n, a[P], numl, numr;
LL sum[P], ans;
char c[P], cl, cr;
deque<pair<int, char> >Q1, Q2;

int Read() {
	int num = 0, sign = 1;
	char C = getchar();
	while (C < '0' || C > '9') {
		if (C == '-')
			sign = -1;
		C = getchar();
	}
	while (C >= '0' && C <= '9')
		num = (num << 1) + (num << 3) + (C ^ 48), C = getchar();
	return num * sign;
}

char Readc() {
	char C = getchar();
	while (C < 'a' || C > 'z')
		C = getchar();
	return C;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	n = Read();
	for (int i = 1; i <= n; i++)
		a[i] = Read(), c[i] = Readc(), sum[i] = sum[i - 1] + a[i];
	for (int i = 1; i <= n; i++)
		if (sum[i] >= ((sum[n] + 1) >> 1)) {
			if (sum[n] & 1) {
				a[i]--;
				for (int j = i; j <= n; j++)
					sum[j]--;
			}
			Q1.push_back({(sum[n] >> 1) - sum[i - 1], c[i]});
			for (int j = i - 1; j > 0; j--)
				Q1.push_back({a[j], c[j]});
			Q2.push_back({sum[i] - (sum[n] >> 1), c[i]});
			for (int j = i + 1; j <= n; j++)
				Q2.push_back({a[j], c[j]});
			break;
		}
	while (!Q1.empty()) {
		numl = Q1.front().first, numr = Q2.front().first, cl = Q1.front().second, cr = Q2.front().second;
		Q1.pop_front(), Q2.pop_front();
		if (numl == numr && cl != cr)
			ans += numl;
		else if (numl == numr && cl == cr)
			continue;
		else if (numl < numr) {
			if (cl != cr)
				ans += numl;
			numr -= numl, Q2.push_front({numr, cr});
		} else {
			if (cl != cr)
				ans += numr;
			numl -= numr, Q1.push_front({numl, cl});
		}
	}
	printf("%lld", ans);
	return 0;
}