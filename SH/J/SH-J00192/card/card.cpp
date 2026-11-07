#include<bits/stdc++.h>
using namespace std;
const int INF=1e7+1;
int n,m,a[1000009],b[1000009],ans[1000009];
int f(int p,int q){
	for(int l=q;l<=n;l++)
		if(a[l]==p)
			return l;
		else return INF;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(f(j,i)!=INF){
				fill(b+f(j,i)+1,b+n+1,0);
				for(int k=i;k<=n;i++) ans[b[k]]++;
				continue;
			}
		}
		for(int i=1;i<=n;i++) b[i]=a[i];
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
