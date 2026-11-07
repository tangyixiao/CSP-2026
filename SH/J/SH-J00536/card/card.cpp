#include<bits/stdc++.h>
using namespace std;
stack<int> st;
int n,m,a[500005],vis[300005],cnt=0,ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(vis[a[j]]!=0){
				while(vis[a[j]]!=0){
					vis[st.top()]--;
					st.pop();
				}
			}
			st.push(a[j]);
			vis[a[j]]++;
		}
		while(!st.empty()){
			vis[st.top()]--;
			ans[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
