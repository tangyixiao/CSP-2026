#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int a[n + 5];
	for(int i = 1; i <= n; i++) cin >> a[i];
	int cnt[m + 1] = {0}, pos[m + 1] = {0}, cntt = 0, qwq[15] = {0};
	int ans[m + 1] = {0};
	for(int i = 1; i <= n; i++){
		for(int j = i + 1; j <= n; j++){
			if(pos[a[j]] == 0){
				pos[a[j]] = cntt + 1;
				qwq[cntt + 1] = a[j];
				cnt[a[j]] ++;
			}
			else{
				for(int k = pos[a[j]]; k <= cntt + 1; k++){
					cnt[qwq[k]] --;
					pos[a[k]] == 0;
					cnt[a[k]] == 0;
				}
			}
		}
		for(int i = 1; i <= m; i++){
			if(cnt[i] != 0) ans[i] ++;
		}
	}
	for(int i = 1; i <= n; i++){
		cout << ans[i] << ' ';
	}
	return 0;
}
