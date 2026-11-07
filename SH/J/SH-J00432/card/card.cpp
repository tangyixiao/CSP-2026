#include <bits/stdc++.h>
using namespace std;
const int N=500004,M=300004;
int n,m,a[N],b[M],c[M],ans[M]; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n;i>=1;i--){
		if(!b[a[i]]) b[a[i]]=i;
		c[a[i]]++;
	}
	for(int i=1;i<=m;i++){
		int k=b[i];
		while(k<=n){
			k=b[a[k]];
			ans[a[k]]+=c[i];
			k++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
