#include <bit/stc++.h>
using namespace std;

int n, m, a[510000];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int i = 1; i <= n; i++)
		printf("%d ", n);
	return 0;
}
