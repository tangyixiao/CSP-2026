//暴力
#include<bits/stdc++.h>
#define N 500009
using namespace std;
int n, m, a[N], ans[N], last[N];
deque<int> cards;

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	for(int i=1; i<=n; i++) cin >> a[i];
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=N; j++) last[i] = 0;  //初始化 
		cards.clear();
		for(int j=i; j<=n; j++){
			if(last[a[j]]){ //如果有匹配的......
				for(int l=last[a[j]]; l<j; l++){
					if(!cards.empty()) cards.pop_back();
					last[a[l]] = 0;
				}
				//移除前面的卡片 
			}
			cards.push_back(a[j]);
			last[a[j]] = j;
		}
		while(!cards.empty()){
			ans[cards.front()]++;
			cards.pop_front();
		} //统计剩余的卡牌 
	}
	
	m = *max_element(a+1, a+n+1);
	for(int i=1; i<=m; i++) cout << ans[i] << ' ';
	return 0;
}
