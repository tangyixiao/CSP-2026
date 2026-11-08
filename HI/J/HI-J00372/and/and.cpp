#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010];
int ans=0;
void dfs(int dep,int sum,int s){
	if(sum<ans){
		return;
	} 
	if(s>m){
		ans=sum;
		return; 
	}
	if(s==1){
		for (int i=dep;i<=n;i++){
		int cnt=a[i];
		dfs(i+1,cnt,s+1);
	}
	}
	for (int i=dep;i<=n;i++){
		int cnt=(a[i]&sum);
		dfs(i+1,cnt,s+1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >>n>>m;
	for (int i=1;i<=n;i++){
		cin >>a[i];
	}
	dfs(1,0,1); 
	cout <<ans;
    
	return 0;
}
