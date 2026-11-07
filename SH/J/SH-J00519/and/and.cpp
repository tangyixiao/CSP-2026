#include<bits/stdc++.h>
using namespace std;
int n,m,i,ans,a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	ans=a[n];
	for(i=n-1;n-i+1<=m;i--){
		ans=(ans&a[i]);
		//cout<<a[i]<<"  "<<ans<<"   ";
	}
	cout<<ans;
	return 0;
}
