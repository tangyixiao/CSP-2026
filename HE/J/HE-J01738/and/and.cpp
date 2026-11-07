#include<bits/stdc++.h>
using namespace std;
int n;
int a[999999];
int m;
int maxi=0;
bool vis[999999];
int er(int x,int y,int cnt){
	bool xi[35];
	bool yi[35];
	for(int i=0;i<=30;i++){
		xi[i]=0;
		yi[i]=0;
	}
	for(int i=30;i>=0;i--){
		if(x>=pow(2,i)){
			x-=pow(2,i);
			xi[i]=1;
		}
		if(y>=pow(2,i)){
			y-=pow(2,i);
			yi[i]=1;
		}
	}
	for(int i=30;i>=0;i--){
		if(xi[i]==1&&yi[i]==1){
			cnt+=pow(2,i);
		}
	}return cnt;
}
void dfs(int step,int sum){
	if(step==m){
		maxi=max(maxi,sum);
		return;
	}
	for(int i=0;i<n;i++){
		if(!vis[i]){
			vis[i]=true;
			if(step==0)dfs(step+1,a[i]);
			else dfs(step+1,er(sum,a[i],0));
			vis[i]=false;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	dfs(0,0);
	cout<<maxi;
	return 0;
}
