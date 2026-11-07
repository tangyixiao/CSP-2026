#include<bits/stdc++.h>
using namespace std;
int n , m; 
int a[500005];
bool b[500005];
int m1[500005];
int main() {
//	freopen("card.in" , "r" , stdin);
//	freopen("card.out" , "w" , stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	for(int i = 1;i <= n;i++) {
		memset(b , 0 , sizeof(b));
		for(int j = i;j <= n;j++) {
			for(int k = j - 1;k >= i;k--) {
				if(a[j] == a[k] && !b[k]) {
					for(int s = j - 1;s >= k;s--) {
						b[i] = false;
					}
				}
			}
		}
		for(int x = i;x <= n;x++) {
			for(int y = 1;y <= m;y++) {
				if(a[x] == y && !b[x]) {
					m1[y] ++;
				}
			}
		}
	}
	for(int i = 1;i <= m;i++) {
		cout << m1[i] << " ";
	}
	return 0;
} 
