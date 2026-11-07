#include <bits/stdc++.h>
using namespace std;
int arr[200001];
bool used[200001];
int n,m,maxn=-1;
void dfs(int step,int num){
	if (step==m){
    	maxn=max(maxn,num);
    	return ;
	}
	for (int i=1;i<=n;i++){
		if (num<=maxn){return ;} 
		if (!used[i]){
			used[i]=true;
			dfs(step+1,arr[i]&num);
			used[i]=false;
		}
	}
	return ; 
}
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>arr[i];
	}
	dfs(0,pow(2,30)-1);
	cout<<maxn;
	return 0;
}
