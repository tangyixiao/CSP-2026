#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,a[200000],m;
	long long ans;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=n;i>=n-m+1;i--){
		if(i==n) ans=a[i];
		else ans=(ans & a[i]);
	}
	cout<<ans;
}
