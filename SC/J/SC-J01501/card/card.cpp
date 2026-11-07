#include <stdio.h>
#define MAXM 300010
#define SIZE 500010
using ll = long long;
int N, M;
int arr[SIZE];
int vis[MAXM];
int fnt[SIZE], nxt[MAXM];
int lst[MAXM], tot[MAXM];
void solve() {
	
}
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &N, &M);
	for (int i = 1; i <= N; i++) {
		scanf("%d", arr + i);
		fnt[i] = lst[arr[i]], nxt[fnt[i]] = i, lst[arr[i]] = i;
	}
	int cnt = 0;
	for (int i = N; cnt < M && i; i--) {
		if (vis[arr[i]]) continue;
		vis[arr[i]] = 1, cnt++;
		tot[arr[i]] = i;
	}
	for (int i = 1; i <= M; i++) {
		printf("%d ", tot[i]);
	}
}
//NO MORE ANY TIME