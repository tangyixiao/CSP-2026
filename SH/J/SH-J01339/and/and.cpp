#include<bits/stdc++.h>
using namespace std;

int n, m;

long long a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}
	for(int j = 1; j <= n; j++) {	
		for(int i = 0; i < n - 1; i++) {
			if(a[i] < a[i + 1]) {
				swap(a[i], a[i + 1]);
			} 
		}
	}
	printf("%lld", a[m - 1]);
	return 0;
}
