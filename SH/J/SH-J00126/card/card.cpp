#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500010],vis[300010],sum[300010];
stack<int> st;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;++i) cin>>a[i];
	if(n<=5000){
		for(int i=0;i<n;++i){
			memset(vis,0,sizeof(vis));
			for(int j=i;j<n;++j){
				if(vis[a[j]]==0){
					vis[a[j]]=1;
					st.push(a[j]);
				}else{
					while(!st.empty()){
						int x=st.top();
						if(x==a[j]) break;
						vis[x]=0;
						st.pop();
					}
				}
			}
			int k;
			while(!st.empty()){
				k=st.top();
				st.pop();
				sum[k]++;
//				cout<<k<<' ';
			}
//			cout<<endl;
		}
	}else{
		for(int i=n-1;i>=0;--i){
			if(a[i]!=a[i+1]) sum[a[i]]+=((i+1)*a[i]);
		}
	}
	for(int i=1;i<=m;++i) cout<<sum[i]<<' ';
	return 0;
}
