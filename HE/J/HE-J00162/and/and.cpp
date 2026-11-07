#include <cstdio>
using namespace std;
const int N = 2e5 + 5;
int n, m, a, s[N][30], t, p, ans;
bool w[N];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; ++ i) {
		w[i] = true;
		scanf("%d", &a);
		t = -1;
		while(a) {
			s[i][++ t] = a & 1;
			a >>= 1;
		}
	}
	for(int i = 29; i >= 0; -- i) {
		p = 0;
		for(int j = 1; j <= n; ++ j)
	    	p += s[j][i] * w[j];
	    if(p >= m) {
	    	ans += (1 << i);
	    	for(int j = 1; j <= n; ++ j)
	    	    if(!s[j][i])
	    	        w[j] = false;
		}
	}
	printf("%d", ans);
	return 0;
}
