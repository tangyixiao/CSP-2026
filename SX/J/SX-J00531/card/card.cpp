#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500010],vis[500010];
stack<int>now;
int ans[500010];
bool ans1[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int cnt=1;cnt<=n;cnt++){
		memset(vis,0,sizeof(vis));
		memset(ans1,0,sizeof(ans1));
		int num=0;
		for(int i=cnt;i<=n;i++){
			if(vis[a[i]]==0){
				now.push(a[i]);
				vis[a[i]]=num+1;
				num++;
			}else{
				for(int j=vis[a[i]];j<=num;j++){
					vis[now.top()]=0;
					now.pop();
					num--;
				}
			}
		}
		while(now.size()!=0){
			int t=now.top();
			if(!ans1[t]){
				ans1[t]=1;
				ans[t]++;
			}
			now.pop();
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}