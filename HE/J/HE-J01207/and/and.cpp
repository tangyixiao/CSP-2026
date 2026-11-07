#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
long long ans;
bool vis[200005];
void bfs(long long x,int step,long long last){
	if(step==m+1){
		ans=max(ans,x);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]&&a[i]>last&&(x>ans||step==1)){
			vis[i]=1;
			if(step==1){
				bfs(a[i],step+1,a[i]);
			}else{
				bfs(x&a[i],step+1,a[i]);
			}
			vis[i]=0;
		} 
	}
};
map<long long,int> ma;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(ma[a[i]]!=0){
			ans=max(ans,a[i]);
		}
		ma[a[i]]=1;
	}
	sort(a+1,a+n+1);
	bfs(0,1,-1);
	cout<<ans;
	return 0;
}
