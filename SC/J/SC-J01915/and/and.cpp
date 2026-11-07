#include<bits/stdc++.h>
using namespace std;
int n,m;
int ans=0;
int p[100000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>p[i];
		ans=max(ans,p[i]);
	} 
	cout<<ans;
	return 0;
} 