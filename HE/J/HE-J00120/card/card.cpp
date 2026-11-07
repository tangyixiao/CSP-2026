#include <bits/stdc++.h>
using namespace std;
const int N = 501000;
int n, m, a[N];
int b[N];
long long ans[N]; 
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++)
			b[j] = 0;
		stack<int> st;
		for(int j = i; j <= n; j++){
			if(b[a[j]]){
				while(!st.empty()){
					--b[st.top()];
					--ans[st.top()];
					if(st.top() == a[j]){
						st.pop();
						break;
					}
					st.pop();
				}
			}
			++ans[a[j]];
			++b[a[j]];
			st.push(a[j]);
		}
	}
	for(int i = 1; i <= m; i++)
		cout << ans[i] << ' ';
	return 0;
}
