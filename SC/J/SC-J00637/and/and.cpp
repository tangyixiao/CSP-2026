#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n,m,a[200002],mx,vis[22];
void sol1(){
	int mx=0;
	for(int i=1;i<=n;i++){
		mx=max(mx,a[i]);
	}
	cout<<mx;
	return;
}
void sol2(){
	int mx=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i==j){
				continue;
			}
			mx=max(mx,a[i]&a[j]);
		}
	}
	cout<<mx;
	return;
}
void dfs(int x,int num){
	if(x==m){
		mx=max(mx,num);
	}
	if(x==0){
		for(int i=1;i<=n;i++){
			vis[i]=1;
			dfs(1,a[i]);
			vis[i]=0;
		}
	}else {
		for(int i=1;i<=n;i++){
			if(!vis[i]){
				vis[i]=1;
				dfs(x+1,num&a[i]);
				vis[i]=0;
			}
		}
	}
}
signed main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sol1();
	}else if(m==2){
		sol2();
	}else if(n<=20){
		dfs(0,0);
		cout<<mx;
	}else {
		int num=0;
		for(int i=n;i>=1;i--){
			if(num==m){
				cout<<mx;
				return 0;
			}
			num++;
			mx&=a[i];
		}
	}
}//511
