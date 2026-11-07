#include<bits/stdc++.h>
using namespace std;
int n,m;
int c[300005];
int cnt;
int a[500005];
bool vis[500005];
int ans[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++)cin>>a[i];
	for(int i = 1;i<n;i++)if(a[i]<=a[i+1])cnt++;
	if(cnt == n-1){
		int sum = 0;
		for(int i = 1;i<=n;i++)c[a[i]]++;
		for(int i = 1;i<=m;i++){
			sum += c[i];
			if(c[i]){
				cout<<sum<<" ";
			}
			else{
				cout<<0<<" ";
			}
		}
		return 0;
	}
	for(int i = 1;i<=n;i++){
		stack<int> st;
		memset(vis,0,sizeof(vis));
		for(int j = i;j<=n;j++){
			if(vis[a[j]]){
				while(st.top() != a[j]){
					vis[st.top()] = 0;
					st.pop();
				}
			}
			else{
				st.push(a[j]);
				vis[st.top()] = 1;
			}
		}
		while(!st.empty()){
			ans[st.top()]++;
			st.pop();
		}
	}
	for(int i = 1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
}
