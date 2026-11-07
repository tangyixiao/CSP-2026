#include <iostream>

const int N = 2e5 + 99;

int n;
char c[N];
long long a[N];

int main() {
	
	freopen( "string.in", "r", stdin);
	freopen( "string.out", "w", stdout);
	
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr), std::cout.tie(nullptr);
	
	std::cin >> n;
	for(int i = 1; i <= n; i++)
		std::cin >> a[i] >> c[i];
	
	int l = 1, r = n, lu = 0, ru = 0;
	long long cnt = 0;
	
	while( l < r ) {
		
		
		if(c[l] == c[r]) {
			
			if(a[l] - lu > a[r] - ru) {
				lu = lu + a[r] - ru;
				ru = 0;
				r--;
			}
			else if(a[l] - lu < a[r] - ru) {
				ru = ru + a[l] - lu;
				lu = 0;
				l++;
			}
			else{
				l++, r--;
				lu = ru = 0;
			}
			
		}
		else {
			if(a[l] - lu > a[r] - ru) {
				lu = lu + a[r] - ru;
				cnt += a[r] - ru;
				ru = 0;
				r--;
			}
			else if(a[l] - lu < a[r] - ru) {
				ru = ru + a[l] - lu;
				cnt += a[l] - lu;
				lu = 0;
				l++;
			}
			else{
				cnt += a[l] - lu;
				l++, r--;
				lu = ru = 0;
			}
		}
		
	}
	
	std::cout << cnt;
	
	return 0;
	
}

/*

AC time : 9:30
write took time: 36

*/