#include<bits/stdc++.h>
using namespace std;
int n,m,MAX=-1;
int arr[200005];
bool vis[200005];
void dfs(int step,int num){
	if(step==m){
		MAX=max(MAX,num);
		return;
	}
	for(int i=0;i<n;i++){
		if(!vis[i]){
			vis[i]=1;
			int a;
			if(step==0){
				a=arr[i];
			}else{
				a=num&arr[i];
			}
			dfs(step+1,a);
			vis[i]=0;
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	dfs(0,0);
	cout<<MAX;
	return 0;
}