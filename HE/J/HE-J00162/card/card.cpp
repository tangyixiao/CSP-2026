#include <cstdio>
using namespace std;
const int N = 5e5 + 5;
int n, a[N], m;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; ++ i)
	    scanf("%d", &a[i]);
	for(int i = 1; i <= m; ++ i) {
		int t =0;
		for(int j = 1; j <= n; ++ j)
		    if(i == a[j])
		        ++ t;
		printf("%d ", t);
	}
	return 0;
}
