#include<bits/stdc++.h>
using namespace std;

int a[500001], cx[3000001], cnt[300001], sum[300001];
int n, m;

void f(int s, int z) {
	for(int i = s; i < z; i++) {
		if(cnt[a[i]] > 0) cnt[a[i]]--;
	}
	cx[a[s]] = z;
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	
	for(int t = 1; t <= n; t++){
		for(int i = t; i <= n; i++) {
			cnt[a[i]]++;
			if(cnt[a[i]] == 1) cx[a[i]] = i;
			else f(cx[a[i]], i);
		}
		for(int i = 1; i <= m; i++) {
			if(cnt[i] > 0) sum[i]++;
		}
		for(int i = 1; i <= m; i++) cnt[i] = 0;
	}
	
	for(int i = 1; i <= m; i++) printf("%d ", sum[i]);
	return 0;
}