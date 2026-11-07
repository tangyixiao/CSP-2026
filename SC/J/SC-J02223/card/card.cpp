#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int inf = 0x3f3f3f3f;
const int maxn = 5e5 + 5;

int n, m;
int a[maxn], b[maxn];
int ans[maxn];

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1 ; i <= n ; ++ i){
		cin >> a[i];
		b[i] = a[i];
	}
	for(int i = 1 ; i <= n ; ++ i){
		int c[maxn] = {0};
		for(int j = i ; j <= n ; ++ j){		
			int p = lower_bound(a + 1, a + j, a[j]) - a;
			if(a[p] == a[j]){
				for(int k = p  ; k < j  ; ++ k){
					c[k] = -1;
				}
			}
		}
		for(int j = i ; j <= n ; ++ j){
			ans[a[j]] = ans[a[j]] + 1 + c[j];
		}
	}
	for(int i = 1 ; i <= m ; ++ i){
		cout << ans[i] << " ";
	}
	return 0;
}