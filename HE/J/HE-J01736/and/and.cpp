#include<bits/stdc++.h>
using namespace std;
int a[200010];
bool vis[200010];
int n,m;
int ans;
int num=-100;
void dfs(int step,int ans){
	if(step==m+1){
		//cout<<step<<" "<<ans<<endl;
		num=max(num,ans);
		//cout<<num<<endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
		//	cout<<step<<" "<<a[i]<<" "<<ans<<endl;
			vis[i]=1;
			if(step==1)dfs(step+1,a[i]);
			else{
			//	cout<<ans<<" "<<a[i]<<" "<<(ans&a[i])<<endl;
				dfs(step+1,(ans&a[i]));
			} 
			vis[i]=0;
			
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    dfs(1,0);
    cout<<num;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
