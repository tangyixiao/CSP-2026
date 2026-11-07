#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int dfs(int x,int step,int va){
	if(step==0)return va; 
	int maxn=0;
	for(int i=x+1;i<=n-step+2;i++){
		maxn=max(dfs(i,step-1,a[x]&a[i]),maxn);
	}
	return maxn;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		int aa=0;
		for(int i=1;i<=n;i++){
			aa=max(aa,a[i]); 
		}
		cout<<aa;
		return 0;
	}
	if(m==n){
		int bb=a[1];
		for(int i=2;i<=n;i++){
			bb=bb&a[i];
		}
		cout<<bb;
		return 0;
	}
	int ans=0;
	for(int i=1;i<=n-m;i++){
		ans=max(ans,dfs(i,m,a[i]));
	}
	cout<<ans;
	return 0;
} 