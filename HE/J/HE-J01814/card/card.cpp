#include <bits/stdc++.h>
using namespace std;
int n,m,a[500002];
int vis[500002];
int ans[300002];
void func(int i){
	for (int k = i;k <= n;k++){
		if (vis[a[k]] == 0){ // a[k]的值没出现过 
			vis[a[k]] = k; // 现在出现了，记录下标 
		}else{ // 出现过 
			for (int j = vis[a[k]];j < k;j++){  // 从a[k]第一次出现的下标开始遍历 
				vis[a[j]] = 0; // 拿走卡牌 
			}
		}
		vis[a[k]] = k; 
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for (int i = 1;i <= n;i++){
		func(i);
		for (int j = 1;j <= m;j++){
			if (vis[a[j]] != 0){
				ans[a[j]] ++;
			}
		}
		memset(vis,0,sizeof vis);
	}
	for (int i = 1;i <= m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}
