#include<bits/stdc++.h>
#define int long long
using namespace std;
stack<int> st;
const int N=5e5+10,M=3e5+10;
int n,m,a[N],cnt[M];
int vis[M];

signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;++i) scanf("%lld",&a[i]);
	for(int j=1;j<=n;++j){
		for(int i=1;i<=n;++i) vis[a[i]]=0;
		while(!st.empty()) st.pop();
		
		for(int i=j;i<=n;++i){
			if(!vis[a[i]]) vis[a[i]]++,st.push(a[i]);
			else while(st.top()!=a[i]) vis[st.top()]--,st.pop();
		}
		
		for(int i=1;i<=m;++i) if(vis[i]) cnt[i]++;
	}
	
	for(int i=1;i<=m;++i) printf("%lld ",cnt[i]); 
	return 0;
}