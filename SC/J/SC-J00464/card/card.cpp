#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],l[300005],ans[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		queue<int>q;
		memset(l,0,sizeof(l));
		for(int j=i;j<=n;j++){
			if(l[a[j]]==0){
				q.push(a[j]);
				l[a[j]]=j;
			}else{
				while(q.front()!=a[j]){
					int u=q.front();
					q.pop();
					l[u]=0;
				}q.pop();
				l[a[j]]=j;
				q.push(a[j]);
			}
		}while(!q.empty()){
			int u=q.front();
			q.pop();
			ans[u]++;
		}
	}for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}