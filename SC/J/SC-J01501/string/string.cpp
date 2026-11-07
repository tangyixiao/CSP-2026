#include <stdio.h>
#include <map>
#define SIZE 200010
#define min(a,b) (((a) < (b)) ? (a) : (b))
using namespace std;
using ll = long long;
ll ans;
int L, N;
pair<ll, char> str[SIZE];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%lld %c", &str[i].first, &str[i].second);
		L += str[i].first;
		if (str[i - 1].second == str[i].second) {
			str[i - 1].first += str[i].first;
			i--, N--;
		}
	}
	for (int l = 1, r = N; l <= r;) {
		ll len = min(str[l].first, str[r].first);
		if (str[l].second != str[r].second) ans += (ll)len;
		str[l].first -= len, str[r].first -= len;
		if (!str[l].first) l++;
		if (l == r) break;
		if (!str[r].first) r--;
	}
	printf("%lld", ans);
}