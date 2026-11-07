#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500050];
int vis[300050];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int vis1[500050]={};
		for(int j=i;j<=n;j++){
			bool shi=1;
			for(int k=i;k<j;k++){
				if(a[j]==a[k] && shi==1 && vis1[k]==0){
					for(int q=k;q<j;q++){
						if(vis1[q]==0){
							vis[a[q]]--;
							vis1[q]=1;
							shi=0;
						}
					}
				}
			}
			vis[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<vis[i]<<' ';
	}
	return 0;
}