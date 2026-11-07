#include <bits/stdc++.h>
using namespace std;
int n,m;
long long a[200010],mx,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	ans=a[1];
	for(int i=2;i<=n;i++){
		ans=ans&a[i];
	}
	if(m==1){
		cout<<mx;
	}
	if(m==n){
		cout<<ans;
	}
	return 0;
}