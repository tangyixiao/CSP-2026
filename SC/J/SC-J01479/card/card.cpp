#include<bits/stdc++.h>
#define ll long long 
using namespace std;
struct P{
	int id,v,last;
}vis[300005];
ll a[500005],ans[300005],vi[500005],asn[300005];
int main (){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >>n>>m;
	for (int i=1;i<=n;i++){
		cin >>a[i];
	}
	int q=n;
	while(q--){
		int maxn=-1,minn=1e9;
		for (int i=1;i<=m;i++){
			vis[i].id =0;
			vis[i].last =0;
			vis[i].v =0;
			asn[i]=0;
		}
		for (int i=1;i<=n;i++){
			if (i<n-q) {
				vi[i]=1;
			}else {
				vi[i]=0;
				
			}
		}
		for (int i=n-q;i<=n;i++){
			if (!vis[a[i]].v){
				vis[a[i]].v =1;
				vis[a[i]].id =i;
				
			}else {
				vis[a[i]].last =i;
			}
		}
		for (int i=1;i<=m;i++){
			if (vis[i].v ==1){
				for (int j=vis[i].id ;j<vis[i].last;j++ ){
					vi[j]=1;
				}
			}
		}
		for (int i=1;i<=n;i++){
			cout <<vi[i]<<" ";
			if (vi[i]==0){
				asn[a[i]]=1;
			}
		}
		for (int i=1;i<=m;i++){
			ans[i]+=asn[i];
		}
		cout <<endl;
	}
	for (int i=1;i<=m;i++){
		cout <<ans[i]<<" ";
	}
	
}  