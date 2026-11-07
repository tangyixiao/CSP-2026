#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10;
long long a[N],n,m;//依次存储
long long ans[N],vis[N];
stack<long long> st; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	for(int i = 1;i <= n;i++){
		while(!st.empty()) st.pop();
		for(int j = 1;j <= m;j++) vis[j] = 0;
		for(int j = i;j <= n;j++){
			//在弹入前先进行判断
			if(!vis[a[j]]){
					st.push(a[j]);
					vis[a[j]] = 1;
				} 
			else{
				while(st.top() != a[j]){
					vis[st.top()] = 0;
					st.pop();
				}
				st.pop();
				st.push(a[j]);
				}
			}
		for(int i = 1;i <= n;i++){
			if(vis[i]) ans[i]++;
		}
	}	
	for(int i = 1;i <= m;i++){
			cout << ans[i] <<" ";
		}
	return 0;
}
