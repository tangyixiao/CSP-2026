#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m;
int a[N];
int ans[N];
int vis[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof vis);
		int len=0;
		for(int j=i;j<=n;j++){
			
			for(int k=1;k<=len;k++){
				if(vis[k]==a[j]) {
					len=k-1;
					break;
				}
			}
			len++;
			vis[len]=a[j];
		}
		for(int i=1;i<=len;i++) ans[vis[i]]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	
	
	
	return 0;
} 
/*
4 3
1 2 1 3



10 3
3 1 2 1 3 2 3 1 2 1
*/
