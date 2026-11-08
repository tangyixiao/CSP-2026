#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+10;
int a[N],vis[N];
int ans=0;
int n,m;
void dfs(int c,int k,int sum,bool f){
	if(c>=m){
		ans=max(ans,sum);
		return ;
	}
	if(k==n+1){
		return ;
	}
	if(f){
		dfs(c,k+1,sum,1);
		dfs(c+1,k+1,sum+a[k],0);
	}else{
		dfs(c,k+1,sum,0);
		dfs(c+1,k+1,sum&a[k],0);
	}
	
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int ma=0,t=0;
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		t&=a[i];
		ma=max(ma,a[i]);
	}
	if(m==1){
		cout<<ma;
	}else if(m==n){
		cout<<t;
	}else if(m==2){
		int mma=0;
		for(int i=1; i<=n; i++){
			for(int j=i+1; j<=n; j++){
				int x=a[i]&a[j];
				mma=max(mma,x);
				
//				cout<<a[i]<<" "<<a[j]<<" "<<x<<endl;
			}
		}
		cout<<mma;
	}else{
		dfs(0,1,0,1);
		cout<<ans;
	}
	return 0;
}
