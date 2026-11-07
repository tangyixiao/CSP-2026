#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+1;
int n,m,t[N],c[N],k,g[N];
map<int,int> mp;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
 for(int i=1;i<=n;i++){
		cin>>t[i];
		mp[t[i]]++;
	}
 	for(int i=1;i<=n;i++){
 		for(int j=i;j<=n;j++){
 			c[t[j]]++;
		 }
	 }
for(int i=1;i<=n;i++){
		if(g[t[i]]==1) continue;
		cout<<c[t[i]]<<" ";
		g[t[i]]=1;
	}
	return 0;
}