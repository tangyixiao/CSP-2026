#include<bits/stdc++.h>
using namespace std;
long long m; 
long long n,ans,a[500010],all;
int main(){
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	all=a[1];
	for(long long i=2;i<=n;i++){
		all+=a[i];
		long long ui=(a[i]*i-all)/(i-1);
		if(m/ui<i)ans=max(ans,m/ui+1);
		else ans=max(ans,i);
	}
	cout<<ans;
	return 0;
}
