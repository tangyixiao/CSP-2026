#include<bits/stdc++.h>
using namespace std;
int n,m;
int dp[5050],mark[5050],a[5050];
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		stack<int> q;
		memset(mark,0,sizeof(mark));
		for(int j=i;j<=n;j++){
			if(mark[a[j]]==1){
				//cout<<i<<" "<<j<<endl;
				while(1){
					int y=q.top();
					if(a[j]==y){
						//cout<<i; 
						break;
					}
					mark[y]=0;
					q.pop();
				}
				
			}
			else {
				q.push(a[j]);
				mark[a[j]]=1;
			}
		}
		for(int j=1;j<=m;j++){
			//cout<<mark[j]<<" ";
			dp[j]+=mark[j];
			mark[j]=0;
		} 
		//cout<<endl;
		while(!q.empty())q.pop();
	}
	for(int i=1;i<=m;i++){
		cout<<dp[i]<<" ";
	}
	return 0;
}
