#include<bits/stdc++.h>
using namespace std;
int a[200010];
int n,m,ans=-1e9;
void dfs(int x,int w,int c){
		if(c<n){
			dfs(x,w,c+1);
			dfs(x&a[c],w-1,c+1);
		}
	if(w==0){
		ans=max(ans,x);
	}
	
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==1||m==n){
		if(m==1){
			int mx=-1e9;
			for(int i=0;i<n;i++) mx=max(mx,a[i]);
			cout<<mx;
		}else if(m==n){
			int cnt=a[0];
			for(int i=0;i<n;i++) cnt=cnt&a[i];
			cout<<cnt;
		}
	}else{
		for(int i=0;i<n-m;i++){
			dfs(a[i],m,i);
		}
		
		cout<<ans;
	}
	
	return 0;
}