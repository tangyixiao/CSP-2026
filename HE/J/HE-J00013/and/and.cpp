#include<bits/stdc++.h>
using namespace std;

const int N=2e5+10;
int n,m,a[N],ans=-1;
bool vis[N]={false};
void dfs(int sum,int cnt){
	if(cnt==m){
		ans=max(ans,sum);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=true;
			if(cnt==0){
				dfs(a[i],cnt+1);
			}else{
				dfs(sum&a[i],cnt+1);
			}
			vis[i]=false;
		}
	}
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(0,0);
	cout<<ans<<endl;
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
