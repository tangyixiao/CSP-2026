#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500010],b[300010];
int vis[500010];
int chu[500010],top;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++) cin >> a[i];
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof vis);
		memset(chu,0,sizeof chu);
		top=0;
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==1){
				int f;
				for(int k=j-1;k>=1;k--){
					if(a[k]==a[j]) f=k;
				}
				top=f-1;
			}
			chu[++top]=a[j];
			vis[a[j]]=1;
		}
		for(int j=1;j<=top;j++) b[chu[j]]++;
	}
	for(int i=1;i<=m;i++) cout << b[i] << " "; 
	return 0;
}
