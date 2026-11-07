#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a,a+n+1);
	long long ans;
	for(long long i=1;i<=m;i++){
		ans=a[n];
		for(int j=n-1;j>=1;j--){
			ans&=a[i];
		}
	}
	cout<<ans;
	return 0;
}