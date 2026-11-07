#include <iostream>
#include <cstring>
using namespace std;
const int N = 5e5 + 10;
typedef long long ll;
int n, m;
int a[N];
int vis[N];
ll ans[N];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	if (m == 1){
		cout << n << endl;
		return 0;
	} else if (m == 2){
		int cnt = 0;
		ans[a[n]] = n;
		int nx;
		for (int i = 1; i <= n; i++){
			if (a[i] != a[n]){
				nx = a[i];
				cnt++;
			}
		}
		ans[nx] = cnt;
	} else if (n <= 500){
		for (int i = 1; i <= n; i++){
			memset(vis, 0, sizeof(vis));
			for (int j = i; j <= n; j++){
				if (vis[a[j]]){
					for (int k = vis[a[j]]; k < j; k++){
						vis[a[k]] = 0;
					}
				}
				vis[a[j]] = j;
			}
			
			for (int j = 1; j <= m; j++){
				if (vis[j]) ans[j]++;
				//if (vis[3]) cout << i << endl;
			}
		}
	} else {
		ans[a[n]] = n;
		for (int i = 1; i <= n - 1; i++){
			if (a[i + 1] > a[i]){
				ans[a[i]] = i;
			}
		}
	}
	
	for (int i = 1; i <= m; i++){
		cout << ans[i] << " ";
	}
	
	return 0;
} 
