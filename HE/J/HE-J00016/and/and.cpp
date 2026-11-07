#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
int n,m,a[N],ans=-1e9;
bool used[N];
void dfs(int cur,int siz){
	if(siz==m){
		ans=max(ans,cur);
		return;
	}
	for(int i=1;i<=n;i++){
		if(!used[i]){
			used[i]=true;
			if(siz==0){
				dfs(a[i],siz+1);
			}
			else{
				dfs(cur&a[i],siz+1);
			}
			used[i]=false;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(0,0);
	cout<<ans;
	return 0;
}
