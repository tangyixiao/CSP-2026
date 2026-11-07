#include<bits/stdc++.h>
using namespace std;
long long m,n,a[200005],ans;
int main(){
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}sort(a,a+n);
	ans=a[n-1];
	for(long long i=1;i<=m;i++){
		ans=ans & a[n-i];
	}
	cout<<ans<<endl;
	return 0;
}