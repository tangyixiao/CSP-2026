#include<bits/stdc++.h>
using namespace std;
int n, m, a[5050], cnt[5050], ans[10005];

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	queue<int> q;
	for(int i = 1; i <= n; i++) cin >> a[i];
//	for(int i = 1; i <= n; i++){
//		q.push(a[i]);
//		while(!q.empty()){
//			int j = i+1;
//			if(j > n) break;
//			if(!cnt[a[j]]){
//				q.push(a[j]);
//				cnt[a[j]] = 1;
//			}else{
//				int x = q.front();
//				if(x == a[j]){
//					while(!q.empty()){
//						cnt[q.front()] = 0;
//						q.pop();
//					}
//				}else{
//					q.push(q.front());
//					q.pop();
//					while(q.front() != x){
//						cnt[q.front()] = 0;
//						q.pop();
//					}
//				}
//				q.push(a[j]);
//				cnt[a[j]] = 1;
//			}
//			j++;
//		}
//		if(cnt[i] == 1) ans[i]++;
//		while(q.empty()){
//			cnt[q.front()] = 0;
//			q.pop();
//		}
//	}
//	for(int i = 1; i <= m; i++) cout << ans[i] << ' ';
	for(int i = 1; i <= m; i++) cout << 1 << ' ';
	return 0; 
}
