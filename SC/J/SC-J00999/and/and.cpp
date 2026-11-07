#include<bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;
const int N=2e5+10;
int a[N];
int n,m,ans=INT_MIN;
void handle_1(){
	int mx=0;
	for(int i=1;i<=n;++i){
		mx=max(mx,a[i]);
	}
	cout<<mx;
	return; 
}
void handle_n(){
	int ret=a[1];
	for(int i=2;i<=n;++i){
		ret&=a[i];
	}
	cout<<ret;
	return; 
}
void dfs(int x,int sel,int res){
	if(sel==m){
		ans=max(ans,res);
		return;
	}
	if(x>n)return;
	if(res==-1){
		dfs(x+1,sel+1,res);
	}else
		dfs(x+1,sel+1,res&a[x]);
	dfs(x+1,sel,res);
	return;
}
void handle_2(){
	int ans=INT_MIN;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			if(j==i){
				continue;
			}
			ans=max(ans,a[i]&a[j]);
		}
	}
	cout<<ans;
	return;
}
signed main(){
//	20+pts
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	if(m==1){
		handle_1();
	}else if(m==n){
		handle_n();
	}else if(m==2){
		handle_2();
	}else{
		dfs(1,0,-1);
		cout<<ans;
	}
	return 0;
}
/*
handle_n:
4 4
5 9 31 58
out: 0

handle_1:
4 1
5 9 31 58
out: 58
*/