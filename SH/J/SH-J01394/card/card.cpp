#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
bool vis[300010];
int cnt[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	if(n<=5000&&m<=3000){
		
		for(int x=1;x<=n;++x){
			stack<int>st;
			memset(vis,0,sizeof vis);
			for(int i=x;i<=n;++i){
				if(vis[a[i]]==0){
					st.push(a[i]);
					vis[a[i]]=1;
				}else{
					while(!st.empty()&&st.top()!=a[i]){
						vis[st.top()]=0;
						st.pop();
					}
				}
			}
			for(int j=1;j<=m;++j){
				if(vis[j]){
					//cout<<j<<" ";
					++cnt[j];
				}
			}
			//cout<<"\n";
		}
		for(int i=1;i<=m;++i){
			cout<<cnt[i]<<" ";
		}
	}else{
		for(int x=1;x<=n;++x){
			
		}
	}
	return 0;
}
