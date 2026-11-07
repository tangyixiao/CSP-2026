#include <stdio.h>
#include <algorithm>
#define MAX_BIT 64
#define BIT 30
#define SIZE 200010
#define min(a,b) (((a) < (b)) ? (a) : (b))
using namespace std;
using ll = long long;
int ans = 0, now;
int N, M;
int arr[SIZE];
int bit[MAX_BIT] = {1};
void init() {
	for (int i = 1; i <= 30; i++) bit[i] = 1 << i;
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	init();
	scanf("%d%d", &N, &M);
	for (int i = 1; i <= N; i++) {
		scanf("%d", arr + i);
	}
	sort(arr + 1, arr + N + 1);
	for (int i = BIT; i >= 0; i--) {
		now = ans + bit[i];
		int inx = lower_bound(arr + 1, arr + N + 1, now) - arr;
		if (N - inx + 1 >= M) ans += bit[i];
	}
	printf("%d", ans);
}
//someting wrong
//10:17