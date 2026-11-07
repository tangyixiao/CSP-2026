#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],Ans = 1;
void dfs(int x,int ans,int y){
	if(y>=m){
		Ans = max(Ans,ans);
		return ;
	}
	if(x>n){
		return ;
	}
	if(y==0){
		dfs(x+1,a[x],y+1);
	}
	else{
		dfs(x+1,ans&a[x],y+1);
	}
	dfs(x+1,ans,y); 
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i =1;i<=n;i++){
		cin >> a[i];
	}
	dfs(1,0,0);
	cout << Ans;
	return 0;
}