#include<bits/stdc++.h>
using namespace std;
const int N=2e5+1;
int a[N],n,m,ans=0;
void dfs(int i,int s,int cut){
	if (cut==m){
		ans=max(s,ans);
		return;
	}
	if (i>n) return;
	dfs(i+1,s,cut);
	dfs(i+1,s&a[i],cut+1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1,0x3f3f3f3f,0);
	cout<<ans;
	return 0; 
}