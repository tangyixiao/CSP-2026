#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10; 
int n,m,vis[N],ans[N],cnt,a[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=1;i<=n;++i){
		stack<int>st;
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;++j){
			if(vis[a[j]]){
				while(st.top()!=a[j]){ans[st.top()]--;st.pop();}
				ans[a[j]]--;
				st.pop();
			}
			st.push(a[j]);
			vis[a[j]]=1;
			ans[a[j]]++;
		}
	}
	for(int i=1;i<=m;++i){
		cout<<ans[i]<<' ';
	}
	return 0;
}