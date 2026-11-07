#include <bits/stdc++.h>
using namespace std;
int n, m, a[500010], cnt[500010], card[300010], pre[500010], sum[300010];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cnt[j] = 0;
		}
		for(int j = i; j <= n; j++){
			cout << a[j] << ' ';
			cnt[a[j]]++;
			if(cnt[a[j]] == 2){
				for(int k = pre[a[j]]; k <= j - 1; k++){
					cnt[a[k]]--;
				}
			}
			pre[a[j]] = j;
		}
		for(int j = 1; j <= m; j++){
			if(cnt[j] == 1){
				sum[j]++;
			}
		}
		cout << endl;
	}
	for(int i = 1; i <= m; i++){
		cout << sum[i] << ' ';
	}
	return 0;
} 
