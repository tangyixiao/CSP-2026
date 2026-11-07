#include<bits/stdc++.h>
using namespace std;
int a[200005],ma=0,ans;
vector<int> g[35],c[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
	cin>>a[i];
	int x=a[i],k=1;
	c[i].push_back(0);
	g[0].push_back(i);
	while(x){
		if(x&1) {		
		c[i].push_back(k);
		g[k].push_back(i);
	}
	x>>=1;
	k+=1;
	}
	ma=max(ma,k);
}
int i=ma;
while(1){
	for(;i>=0;i--){
		if(g[i].size()>=m) break;
	}
	if(!i) break;
	ans+=1<<(i-1);
	vector<int> v;
	for(int j=0;j<g[i].size();j++)
	v.push_back(g[i][j]);
	for(int x=0;x<=34;x++) g[x].clear();
	for(int k=0;k<v.size();k++){
		int p=v[k];
		for(int x=0;x<c[p].size();x++){
			int y=c[p][x];
			if(y!=i)
			g[y].push_back(p);
		}
	}
}
cout<<ans;
	return 0;
	}
