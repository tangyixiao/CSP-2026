#include<bits/stdc++.h>
using namespace std;
int n,m,card[500005],ans[300005],vis[300005],st[300005],top;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>card[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(j!=i&&card[j]==card[j-1])continue;
			int x=card[j];
			if(vis[x]){
				while(st[top]!=x){
					vis[st[top--]]=0;
				}
			}else{
				vis[x]=1;
				st[++top]=x;
			}
		}
		top++;
		while(--top){
			vis[st[top]]=0;
			ans[st[top]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
