#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=2e5;
int a[N];
bool vis[N];
int ans=0;
void dfs(int x,int num){
	//继续下去会更小，由于前面全是零，所以如果当前小的话，剩下的会更小 
	if(num<ans){
		return ;
	}
	if(x>=m){
		ans=max(ans,num);
	}for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			dfs(x+1,num&a[i]);
			vis[i]=0;
		}
	} 
}
void solve1(){
	for(int i=1;i<=n;i++){
		vis[i]=1;
		dfs(1,a[i]);
	}cout<<ans<<endl;
	
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}if(n==m){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}cout<<ans<<endl;
		return 0;
	}if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j){
					continue;
				}
				ans=max(ans,a[i]&a[j]);
			} 
		}cout<<ans<<endl;
		return 0;
	}if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}cout<<ans;
		return 0;
	}
	if(n<=20){
		solve1();
		return 0;
	}
	return 0;
}
