#include <bits/stdc++.h>
using namespace std;
map<int,int> a;
stack<int> st;
map<int,int> vis;
map<int,int> ans;	
int n,m;
bool ok(){
	for(int i=2;i<=n;i++){
		if(a[i]<a[i-1]) return 0;
	} 
	return 1;
} 
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(ok()==1){
		int cnt=0;
		for(int i=1;i<=n;i++){
			cnt++;
			while(i+1<=n && a[i]==a[i+1]){
				i++;
				cnt++;
			}
			cout<<cnt<<" ";
		}
		return 0;
	}
	for(int j=1;j<=n;j++){
		for(int i=j;i<=n;i++){
			if(vis[a[i]]==1){
				while(st.top()!=a[i]){
					vis[st.top()]=0;
					st.pop();
				}
			}
			else{
				vis[a[i]]=1;
				st.push(a[i]);
			}	
		}
		while(!st.empty()){
			vis[st.top()]=0;
			ans[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}