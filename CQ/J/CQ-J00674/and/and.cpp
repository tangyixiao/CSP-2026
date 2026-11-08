#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001];
inline void cmp1(){
	int max_a=0;
	for(int i=0;i<n;i++)
		max_a=max(max_a,a[i]);
	cout<<max_a;
}
inline void cmp2(){
	int ans=a[0];
	for(int i=1;i<n;i++)
		ans=ans&a[i];
	cout<<ans;
}
inline void dfs(int x,int y,int &Ans,int ans){
	ans=ans&a[x];
	if(y==0){
		Ans=max(Ans,ans);
		return;
	}
	for(int i=x+1;i<=n-y;i++)
		dfs(i,y-1,Ans,ans);
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	if(m==1){
		cmp1();
		return 0;
	}
	else if(m==n){
		cmp2();
		return 0;
	}
	int ans=0;
	for(int i=0;i<=n-m;i++){
		int Ans=0;
		dfs(i,m-1,Ans,a[i]);
		ans=max(ans,Ans);
	}
	cout<<ans;
	return 0;
} 
