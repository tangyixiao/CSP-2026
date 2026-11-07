#include<bits/stdc++.h>
using namespace std;
int flag[300005],a[500005],ans[300005],vis[300005];
stack <int> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int f=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		vis[a[i]]=i;
		if(a[i]<a[i-1])f=1;
	}
	if(f==1){
		for(int i=1;i<=n;i++){
			memset(flag,0,sizeof(flag));
			for(int j=i;j<=n;j++){
				if(flag[a[j]]){
					int x=s.top();
					while(x!=a[j]){
						flag[x]=0;
						s.pop();
						x=s.top();
					}
				}
				else {
					s.push(a[j]);
					flag[a[j]]=1;
				}
			}
			for(int j=1;j<=m;j++){
				if(flag[j]==1)ans[j]++;
			}
		}
		for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	}
	else {
		for(int i=1;i<=m;i++){
			cout<<vis[i]<<" ";
		}
	}
	return 0;
}