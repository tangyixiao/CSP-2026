#include<bits/stdc++.h>//long long
using namespace std;
long long n,m,ans,a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	ans=a[n];
	for(long long i=n-m;i<=n;i++){
		ans&=a[i];
	}
	cout<<ans;
	return 0;
} 
