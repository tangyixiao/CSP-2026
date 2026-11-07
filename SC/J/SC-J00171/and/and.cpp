#include<iostream>
using namespace std;
long long a[500005];
bool vis[500005];
long long n,m;
long long ans=0;
void dfs(int x){
	if(x>m){
		long long cnt=0,ct=0;
		bool f=0,fl=0;
		for(int i=1;i<=n;i++){
			if(vis[i]&&f==0){
				cnt=a[i];
				f=1;
			}else if(vis[i]){
				cnt=(cnt&a[i]);
				fl=1;
			}
			if(vis[i]){
				ct++;
			}
		}
		if(cnt>ans&&fl&&ct==m){
			ans=cnt;
		}
		
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i])continue;
		vis[i]=1;
		dfs(x+1);
		vis[i]=0;
		dfs(x+1);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1);
	cout<<ans;
	return 0;
	fclose(stdin);
	fclose(stdout);
}