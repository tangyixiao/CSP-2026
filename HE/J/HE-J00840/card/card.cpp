#include<bits/stdc++.h>
using namespace std;
int a[500005],ans[300005];
bool vis[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	stack<int>st;
	int cnt=1;
	while(cnt-1!=n){
		memset(vis,0,sizeof(vis));
		for(int i=cnt;i<=n;i++){
			if(vis[a[i]]) {
				while(st.top()!=a[i]){
					vis[st.top()]=0;
					st.pop();
				}
			}
			else {
				st.push(a[i]);
				vis[a[i]]=1;
			}
		}
		for(int i=1;i<=m;i++){
			if(vis[i]==1){
				ans[i]++;
			}
		}
		cnt++;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i];
		if(i!=m)cout<<" ";
	}
	return 0;
}
