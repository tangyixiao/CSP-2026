#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	long long ans=a[n],u=a[n-1],v=a[n-2],w=a[n-3],l=a[n-4],r=a[n-5];
	for(long long i=n;i>=n-m+1;i--){
		ans&=a[i];
	}
	for(long long i=n-1;i>=n-m;i--){
		u&=a[i];
	}
	for(long long i=n-2;i>=n-m-1;i--){
		v&=a[i];
	}
	for(long long i=n-3;i>=n-m-2;i--){
		w&=a[i];
	}
	for(long long i=n-4;i>=n-m-3;i--){
		l&=a[i];
	}
	for(long long i=n-5;i>=n-m-4;i--){
		r&=a[i];
	}
	cout<<max(ans,max(u,max(v,max(w,max(l,r)))));
	return 0;
}