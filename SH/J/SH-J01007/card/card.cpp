#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

const int N = 5e5+1, M = 3e5+1;
int pt[N], vis[M], ans[M];
stack<int> s;

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	int n, m; cin>>n>>m;
	for (int i = 1; i <= n; i++) cin>>pt[i];
	for (int i = 1; i <= n; i++){
		memset(vis, 0, sizeof(vis));
		for (int j = i; j <= n; j++){
			if (vis[pt[j]]){
				while (!s.empty() && s.top() != pt[j]){
					vis[s.top()]--;
					s.pop();
				}
			} else {
				vis[pt[j]]++;
				s.push(pt[j]);
			}
		}
		while (!s.empty()){
			ans[s.top()]++;
			s.pop();
		}
	}
	
	for (int i = 1; i <= m; i++){
		cout<<ans[i]<<' ';
	}
	
	return 0;
}
