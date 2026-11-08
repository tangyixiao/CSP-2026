#include <bits/stdc++.h>
using namespace std;

int a[500005];
int b[300005];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		stack <int> st;
		bool vis[300005];
		for(int j = i; j <= n; j++){
			if(vis[a[j]] == false){
				st.push(a[j]);
				vis[a[j]] = true;
			}
			else{
				while(st.top() != a[j]){
					st.pop();
				}
				st.pop();
				st.push(a[j]);
			}
		}
		while(!st.empty()){
			b[st.top()]++;
			st.pop();
		}
	}
	for(int i = 1; i <= m; i++){
		cout << b[i] << " ";
	}
	return 0;
}
