#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n=0,m=0;
ll num[300005]={};
int a[500005]={};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int vis[300005]={};
		stack<int> st;
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==0){
				st.push(a[j]);
				vis[a[j]]+=1;
			}
			else{
				int t=-1;
				while(!st.empty() && t!=a[j]){
					t=st.top();
					vis[t]-=1;
					st.pop();
				}
				st.push(a[j]);
				vis[a[j]]+=1;
			}
		}
		for(int j=1;j<=m;j++){
			if(vis[j]) num[j]+=1;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<num[i]<<" "; 
	}
	return 0;
}