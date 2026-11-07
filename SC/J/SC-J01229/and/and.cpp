#include<bits/stdc++.h>
using namespace std;
vector<int>g[31];
int ans;
int n,m,x;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		g[30].push_back(x);
	}
	for(int i=30;i>=0;i--){
		int cnt=0;
		for(int u:g[i]){
			if(u&(1<<i)){
				cnt++;
			}
		} 
		if(cnt>=m){
			for(int u:g[i]){
				if(u&(1<<i)){
					g[i-1].push_back(u);
				}
			} 
			ans+=(1<<i);
		}else {
			for(int u:g[i]){
				g[i-1].push_back(u);
			} 
		}
	}
	printf("%d",ans);
	//zuihoudedaan.
	return 0;
} 