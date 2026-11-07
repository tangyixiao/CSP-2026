#include <iostream>
#include <cstring>

using namespace std;

const int N = 5e5 + 5;
const int M = 3e5 + 5;

int n, m;
int a[N];
int top;
int sta[N];
int first[N];
int cnt[M];
int ans[M];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++) cin >> a[i];
	for (int k = 1;k <= n;k++) {
	memset(cnt, 0, sizeof(cnt));
	memset(first, 0, sizeof(first));
	for (int i = k;i <= n;i++) {
		
		if (first[a[i]]) {
			for (int j = first[a[i]];j <= top;j++) {
				cnt[sta[j]]--;
			}
			top = first[a[i]] - 1;
		}
		sta[++top] = a[i];
		first[a[i]] = top;
		cnt[a[i]]++;
	}
		for (int i = 1;i <= n;i++) {
			if (cnt[i]) ans[i]++;
		}
	}
	for (int i = 1;i <= m;i++) cout << ans[i] << ' ';
	return 0;
}
