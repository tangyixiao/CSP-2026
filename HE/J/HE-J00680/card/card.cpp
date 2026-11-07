#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;
const int M = 3e5 + 5;

int n, m;
int a[N];
int cnt[M];
int vis[M];
stack<int> st;

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	for(int i = 1; i <= n; i++){
		memset(vis, 0, sizeof vis);
		for(int j = i; j <= n; j++){
			if(vis[a[j]]){
				while(st.top() != a[j]){
					vis[st.top()] = 0;
					st.pop();
				}
			}else{
				st.push(a[j]);
				vis[a[j]] = 1;
			}
		}
		while(st.size()){
			cnt[st.top()]++;
			st.pop();
		}
	}
	
	for(int i = 1; i <= m; i++){
		cout << cnt[i] << " ";
	}
	return 0;
}
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/
