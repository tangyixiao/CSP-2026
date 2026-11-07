#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
ll a[101010],ans;
ll f;
void dfs(int k,int n,int m){
	ll aa;
	if(m==0){
		ans=max(ans,aa);
	}
	for(int i=1;i<=n;i++){
		aa&=a[i];
		dfs(i,n,m-1);
		
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cout<<0; 
	return 0;
	
}