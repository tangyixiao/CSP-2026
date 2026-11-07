#include <bits/stdc++.h>
using namespace std;
int n , m , card[500005] , ans[300005] , t[300005];
int main()
{
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	cin >> n >> m;//共有n张（有重复） ， m种 
	for(int i = 1 ; i <= n ; i++) cin >> card[i];
	for(int i = 1 ; i <= n ; i++){//n局 
		int cnt = 1;
		card[i - 1] = 0;
		for(int j = 1 ; j <= m ; j++) t[j] = 0;//重置 
		for(int j = i ; j <= n ; j++){//一局游戏过程 
			if(t[card[j]] != 0){
				for(int k = 1 ; k <= m ; k++)
					if(t[k] > t[card[j]]) t[k] = 0;
				cnt = t[card[j]] + 1;
			}
			else{
				t[card[j]] = cnt;
				cnt++;
			}
		}
		for(int j = 1 ; j <= m ; j++){
			if(t[j] != 0) ans[j]++;
		}
	}
	for(int i = 1 ; i <= m ; i++) cout << ans[i] << " ";
}