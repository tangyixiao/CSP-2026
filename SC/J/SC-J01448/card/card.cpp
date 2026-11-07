#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[500050];
int vis[500050];
int ans[500050];
stack<int>st;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(vis[a[j]]){
				while(st.top()!=a[j]){
					vis[st.top()]=0;
					st.pop();
				}
			}else{
				st.push(a[j]);
				vis[a[j]]=1;
			}
		}
		while(!st.empty()){
			ans[st.top()]++;
			vis[st.top()]=0;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}