#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=2e5+1000;
long long ar[N];
long long ans=0;
void dfs(int a,long long b,int c){
	if(a==m){
		ans=max(ans,b);
		return;
	}
for(int i=c+1;i<=n;i++){
	if(c==0)b=ar[i];
	dfs(a+1,b&ar[i],i);
}
	return;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
cin>>n>>m;
for(int x=1;x<=n;x++){
	cin>>ar[x];
}
dfs(0,0,0);
cout<<ans;
	return 0;
}
