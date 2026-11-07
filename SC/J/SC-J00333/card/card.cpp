#include<bits/stdc++.h>
using namespace std;
int a[50005],ans[50005];
bool vis[50005];
deque<int>q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		memset(vis,false,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==true){
			while(q.back()!=a[j]){
				q.pop_back();
			}
			q.pop_back();
			}
			q.push_back(a[j]);
			vis[a[j]]=true;
		}
		while(!q.empty()){
			int x=q.back();
			ans[x]++;
			q.pop_back();
		}
	}
	for(int i=1;i<=m;i++)printf("%d ",ans[i]);
	return 0;
}