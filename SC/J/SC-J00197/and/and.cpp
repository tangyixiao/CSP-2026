#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int N=2e5+10;
const long long M=2e63-1;
long long a[N];
signed main(){
	int n,m;
	cin>>n>>m;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
//	for(int i=1;i<=n;i++){
//		cout<<a[i]<<" ";
//	}
	long long ans=M;
	for(int i=n;i>=n-m+1;i--){
//		cout<<ans<<"\n";
		ans&=a[i];
	}
	cout<<ans;
	return 0;
	/*
4 2
3 15 12 12
5 3
31 3 1 15 7
	*/
}