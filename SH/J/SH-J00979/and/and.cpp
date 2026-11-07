//Pre: 20 (@6, 8-10)
#include <iostream>
using namespace std;
int n, m, a[200010], dp[200010];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	if(m == 1){
		cout << 0;
	}else{
		int maxn = -1e9;
		for(int i = 1; i <= n; i++) 
			for(int j = 1; j <= n && i != j; j++)
				maxn = max(maxn, a[i] & a[j]);
		cout << maxn;
	}
	return 0;
}
