#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],s[100005],b[100005],mx,vis[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(a[i],mx);
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=mx;j++){
			b[j]=0;
		}
		for (int j=1;j<=n;j++){
			vis[j]=0;
		}
		for (int j=i;j<=n;j++){
			if(b[a[j]]!=0){
				int k=j-1;
				if(vis[j]==0){
					b[a[j]]--;
					vis[j]=1;
				}
				while(a[k]!=a[j]&&j>=i){
					if(vis[k]==0){
						b[a[k]]--;
						vis[k]=1;
					}
					k--;
				}
			}
			b[a[j]]++;
		}
		for (int j=1;j<=mx;j++){
			if(b[j]>0)s[j]++;
		}
	}
	for (int i=1;i<=m;i++){
		 cout<<s[i]<<" ";
	} 
	return 0;
}
