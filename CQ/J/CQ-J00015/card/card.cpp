#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[500005],pk[500005],t[300005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int in=1;in<=n;in++){
		cin>>a[in];
	}
	for(int i=1;i<=n;i++){
		int vis[300005]={0};
		int now=i;
		int now_h=0;
		while(now<=n){
			int btb=1,xb;
			for(int j=1;j<=now_h;j++){
				if(pk[j]==a[now]){
					btb=0;
					xb=j;
					break;
				}
			}
			if(btb==1){
				pk[++now_h]=a[now];
			}else{
				now_h=xb;
			}
			now++;
		}
		for(int k=1;k<=now_h;k++){
			if(vis[pk[k]]==0){
				t[pk[k]]++;
				vis[pk[k]]++;
			}
		}
	}
	for(int l=1;l<=m;l++){
		cout<<t[l]<<" ";
	}
	return 0;
} 
