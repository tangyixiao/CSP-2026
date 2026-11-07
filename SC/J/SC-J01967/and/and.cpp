#include<bits/stdc++.h>
using namespace std;
int a[200010],n,m,mx;
bool cmp(int x,int y){
	return x>y;
}
void dfs(int ans,int step,int xb){
	if(step==m){
		if(ans>mx){
			mx=ans;
			return;
		}
	}
	for(int i=xb+1;i<=n;i++){
		dfs(ans&a[i],step+1,i);
	}
}
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","W",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		dfs(a[i],1,i);
	}
	cout<<mx;
    return 0;
}