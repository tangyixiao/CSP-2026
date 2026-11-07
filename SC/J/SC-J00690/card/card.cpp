#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int a[500010];
int ans[300010];
int re[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		memset(re,0,sizeof(re));
		for(int j = i; j <= n; j++){
			if(!re[a[j]]){
				s.push(a[j]);
				re[a[j]] = 1;
			}
			else{
				int cur = s.top();
				while(cur != a[j] && !s.empty()){
					//cout << cur << " ";
					s.pop();
					re[cur] = 0;
					cur = s.top();
				}
				if(s.empty()){
					memset(re,0,sizeof(re));
					re[a[j]] = 1;
				}
			}
			//cout << 0;
		}
		
		while(!s.empty()){
			int cur = s.top();
			//cout << cur << " ";
			ans[cur]++;
			s.pop();
		}
	}
	for(int i = 1; i <= m; i++){
		cout << ans[i] << " ";
	}
	return 0;
}