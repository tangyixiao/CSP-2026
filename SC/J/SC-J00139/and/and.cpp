#include<bits/stdc++.h>
using namespace std;
bool bj[200005];
int n,m;
int a[200005],mx=INT_MIN;
void dfs(int k,int x){
	if(k==m){
		mx=max(mx,x);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(!bj[i]){
			bj[i]=1;
			dfs(k+1,(x&a[i]));
			bj[i]=0;
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
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(0,0b11111111111111111111111111111111);
	cout<<mx;
	return 0;
}