#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;
long long n, m, a[N], ans[N];
long long b[N];
deque<int> q;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i ++ ){
		cin >> a[i];
	}
	for(int k = 1; k <= n; k ++ ){
		for(int i = k; i <= n; i ++ ){
			if(b[a[i]] == 0){
				q.push_front(a[i]);
				b[a[i]] = 1;
			} 
			else{
				while(!q.empty() && q.back() != a[i]){
					long long t = q.back();
					q.pop_back();
					b[t] = 0;
				}
			}
		}
		while(!q.empty()){
			long long e = q.front();
			b[e] = 0;
			ans[e] ++ ;
			q.pop_front();
		}
	}
	for(int i = 1; i <= m; i ++ ) cout << ans[i] << " ";
	return 0;
} 
