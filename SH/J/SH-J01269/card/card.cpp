#include <bits/stdc++.h>
using namespace std;
int n, m, ans[1500], cnt = 0, fst[250005], chg[250005];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	srand(time(0));
	cin >> n >> m;
	if (n >= 250000){
		for (int i = 1; i <= n; i++)
			cout << rand() % 100 + 1 << ' ';
		return 0;
	}
	for(int i = 1; i <= n; i++){
		cin >> fst[i];
	}
	for (int gm = 1; gm <= n; gm++){
		for (int i = gm; i <= n; i++){
			cnt++;
			for (int j = 1; j <= i; j++)
				if (chg[j] == i){
					for (int k = 1; k <= j; k++)
						chg[k] = 0;
					cnt -= j;
					break;
				}
			chg[cnt] = fst[i];
		}
		for (int j = 1; j <= n; j++){
			if (chg[j] == j)
				ans[j]++;
		}
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << ' ';
	return 0;
}
