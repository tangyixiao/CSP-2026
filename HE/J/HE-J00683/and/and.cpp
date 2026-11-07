#include <bits/stdc++.h>
using namespace std;

int ans , n , m , r[200010];
void dfs(int now , int step , int l){
	if(step == m){
		ans = max(ans , now);
		return;
	}for(int i = l ; i <= n - m + step + 1 ; i++) dfs(now & r[i] , step + 1 , i + 1);
}

int main(){
//	freopen("and.in" , "r" , stdin);
//	freopen("and.out" , "w" , stdout); 
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++) cin >> r[i]; 
	for(int i = 1 ; i <= n ; i++) dfs(r[i] , 1 , i + 1);
	cout << ans;
	return 0;
}
 
