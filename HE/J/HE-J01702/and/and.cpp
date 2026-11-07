#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],ans,b[200010],x;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w".stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=n;i>=n-m;i--){
		b[i]=a[i];
	}
	x=b[n];
	for(int i=n-1;i>=n-m+1;i--){
		ans=x&b[i];
		x=x&b[i];
	}
	cout<<ans;
	return 0;
}
