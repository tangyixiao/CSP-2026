#include<iostream>
#include<cstring>
using namespace std;

const int N=2e5+5;
long long a[N],ans,maxn;
bool vis[N];
int n,m;

void dfs(int id,long long cnt){
	if(id==m) {
		ans=max(ans,cnt);
		return ;
	} 
	for(int i=1;i<=n;i++){
		if(!vis[i]) {
			vis[i]=1;
			if(cnt!=-1) dfs(id+1,cnt&a[i]);
			else dfs(id+1,a[i]);
			vis[i]=0;
		}
	}
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	if(m==1) {
		cout<<maxn;
		return 0;
	}
	dfs(0,-1);
	cout<<ans;
	return 0;
}
