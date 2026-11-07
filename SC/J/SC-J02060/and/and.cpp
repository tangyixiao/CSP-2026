#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long a[N],vis[N],ans=0,j[N],m;
void dd(int c,int n,int k){
	if(c>m){
		long long mx=j[1];
		for(int i=2;i<=m;i++){
			mx=(mx&j[i]);
		}
		ans=max(ans,mx);
		return;
	}
	for(int i=k+1;i<=n;i++){
		if(vis[i]==0){
			vis[i]=1;
			j[c]=a[i];
			dd(c+1,n,i);
			j[c]=0;
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dd(1,n,0);
	cout<<ans;
	return 0;
}