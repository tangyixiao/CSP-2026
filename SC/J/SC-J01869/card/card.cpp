#include <iostream>

const int N = 100, M = 100;

int n, m;
int a[N], next[N];
int count[M], pre[M];
bool is_get[N];

int main() {
	
	freopen( "card.in", "r", stdin);
	freopen( "card.out", "w", stdout);
	
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr), std::cout.tie(nullptr);
	
	std::cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		
		std::cin >> a[i];
		next[i] = i+1;
		if(pre[a[i]] != 0) {
			next[pre[a[i]]] = i;
			is_get[pre[a[i]]] = 1;
		}
		pre[a[i]] = i;
		
	}
	
	for(int i = 1; i <= n; i++)
		for(int j = i; j <= n; j = next[j])
			count[a[j]] += !(is_get[j]);
	
	for(int i = 1; i <= m; i++)
		std::cout << count[i] << ' ';
	
	return 0;
	
}