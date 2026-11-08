#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=500005;
int n,m,a[N],ans[N],vis[N];
stack<int>st;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int flag=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1])flag=0;
	}
	if(flag&&n>5000){
		for(int i=1;i<=n;i++)ans[a[i]]=i;
		for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
		return 0;
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
			vis[st.top()]=0;
			ans[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
