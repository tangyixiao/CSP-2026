#include<bits/stdc++.h>
using namespace std;
int n,a[5010],m,ans[5010],vis[5010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		stack<int>st;
		for(int j=i;j<=n;j++){
			if(!vis[a[j]]){
				st.push(a[j]);
				vis[a[j]]=1;
			}else{
				while(st.top()!=a[j]){
					int op=st.top();
					vis[op]=0;
					st.pop();
				}
			}
		}
		while(!st.empty()){
			int op=st.top();
			vis[op]=0;
			ans[op]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}