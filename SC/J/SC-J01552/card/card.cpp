#include<bits/stdc++.h>
using namespace std;
int n, m, a[500005], ans[500005];
bool t[500005], flg[500005];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		scanf("%d", &a[i]);
	}
	for(int i = 1;i <= n;i++){
		memset(t, 0, sizeof(t));
		memset(flg, 0, sizeof(flg));
		for(int j = i;j <= n;j++){
			ans[a[j]]++;
			flg[j] = 1;
			if(t[a[j]]){
				for(int k = j - 1;k >= i;k--){
					if(k != j - 1 && a[k + 1] == a[j])break;
					if(flg[k])ans[a[k]]--;
					flg[k] = 0;
					t[a[k]] = 0;
				}	
			}
			t[a[j]] = 1;
		}
		
	}
	for(int i = 1;i <= m;i++){
		printf("%d ", ans[i]);
	}
	return 0;
}