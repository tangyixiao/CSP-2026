#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 201000;

struct rec {
	int val,dig[32];
} a[N];

bool sidiaole[N],found;
int n,m,ans,maxd,ansd[32],sumd[32];

bool compare(rec a,rec b) {
	return a.val > b.val;
}

int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for (int x,i = 1;i <= n;i++) {
		scanf("%d",&x);
		a[i].val = x;
		int cnt = 0;
		while (x) {
			if (x & 1) {
				a[i].dig[cnt] = 1;
				sumd[cnt]++;
			}
			x >>= 1;
			cnt++;
		}
		maxd = max(maxd,cnt-1);
	}
	sort(a+1,a+n+1,compare);
	for (int j = maxd;~j;j--) {
		if (sumd[j] >= m) {
			ansd[j] = 1;
			for (int i = 1;i <= n;i++) {
				if (!a[i].dig[j] && !sidiaole[i]) {
					sidiaole[i] = true;
					for (int k = 0;k <= maxd;k++) {
						if (a[i].dig[k]) sumd[k]--;
					}
				}
			}
		}
	}
	for (int i = 0;i <= maxd;i++) ans += (1<<i)*ansd[i];
	printf("%d",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
