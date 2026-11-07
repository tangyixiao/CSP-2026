#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200100];
int dp[200100];
int cnt; 
void dfs(int x,int y,int sum){
	if(y>m){
		return ;
	}
	if(x>n){
		if(y==m){
			cnt=max(sum,cnt);
		} 
		return ;
	}
	dfs(x+1,y+1,sum&a[x]);
	dfs(x+1,y,sum);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	int c=0;
	for(int i=2;i<=n;i++){
    dfs(i,1,a[i-1]);
}
    cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
