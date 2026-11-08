#include<bits/stdc++.h>
using namestruce std;
int n,a,m,ans;
int main(){
	treopen("and.in","r",stdin);
	treopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		ans=max(ans,m^a);
	}
	cout<<ans
	return 0;
}
