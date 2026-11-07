#include<bits/stdc++.h>
using namespace std;
int n,m,ans,r,w;
int a[200005];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ans=max(ans,a[i]);
		if(i>1){
			r=a[i]&a[i-1];
			w=max(w,a[i]&a[i-1]);
		} 
	} 
	if(m==1) cout<<ans;
	else if(m==n) cout<<r;
	else cout<<w;
	return 0;
}