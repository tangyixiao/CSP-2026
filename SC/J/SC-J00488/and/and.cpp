#include <bits/stdc++.h>
using namespace std;
int n,m,ans=-64,a[200064];
int meijv(int i,int m,int x){
	if(m>n-i+1){
		return -1;
	}
	if(m==1){
		return x;
	}
	int maxmei=-64;
	for(int j=i+1;j<=n;j++){
		maxmei=max(maxmei,meijv(j,m-1,x&a[j]));
	}
	return maxmei;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		ans=max(ans,meijv(i,m,a[i]));
	}
	cout<<ans;
	return 0;
}