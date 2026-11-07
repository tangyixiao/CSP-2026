#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e5 * 5 + 10;
const int maxm = 1e5 * 3 + 10;
int n, m, ans[maxm], a[maxn];

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	for(int k = 1; k <= n; k++){
//		printf("k = %d\n", k);
		stack<int> cd;
		set<int> dc;
		for(int i = k; i <= n; i++){
			int tmp = a[i];
			if(dc.count(tmp)){
//				printf("t::%d\n", tmp);
				bool flag = 0;
				while(!flag){
					int tt = cd.top();
					if(tmp == tt){
						dc.erase(tt);
						cd.pop();
						flag = 1;
						break;
					}
					dc.erase(tt);
					cd.pop();
				}
			}
			cd.push(tmp);
			dc.insert(tmp);
		}
		while(!cd.empty()){
			int tmp = cd.top();
			ans[tmp] += 1;
//			printf("i::%d\n", tmp);
			cd.pop();
			dc.erase(tmp);
		}
	}
	for(int i = 1; i <= m - 1; i++){
		printf("%d ", ans[i]);
	}
	printf("%d\n", ans[m]);
	return 0;
}
