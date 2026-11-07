#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,m,a[N];
bool an[N];
bool cmp(int x,int y){
	return x>y; 
}int dfs(int id,int w,int x){
	if(x==m){
		return w;
	}
	if(id>=n||n-id+x<w){
		return 0;
	}int w1=w;
	if(w==0&&x==0){
		w1=a[id];
	} 
	return max(dfs(id+1,w1&a[id],x+1),dfs(id+1,w,x));
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==m){
		int ans=a[1]; 
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	
	if(m==1){
		cout<<a[1];
		return 0;
	}
	cout<<dfs(1,0,0);
	return 0;
}
