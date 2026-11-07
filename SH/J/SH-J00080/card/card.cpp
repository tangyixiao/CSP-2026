#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+4;
int n,m,a[N],t[N];
int cnt[N];
int f[N];
vector<int> G[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		t[a[i]]=i; f[i]=1;
	}
	for(int i=n-1;i>=1;i--){
		if(t[a[i]]==i) G[i+1].push_back(i);
		else G[t[a[i]]].push_back(i);
	}
	for(int i=1;i<=n;i++)
		for(int j=0;j<G[i].size();j++) 
			f[i]+=f[G[i][j]]; 
			
	
	for(int i=1;i<=m;i++) cout<<f[t[i]]<<" ";
}
