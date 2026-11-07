#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],b[41],res,t,tt=1e18;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	b[0]=1;
	for(long long i=1;i<=31;i++)b[i]=b[i-1]*2;
	for(long long i=1;i<=n;i++)cin>>a[i];
	while(t!=tt){
		tt=t;
		sort(a+1,a+n+1,greater<long long>());
		for(long long i=1;i<=31;i++){
			if(a[m]<b[i])break;
			t=b[i+1]-1;
		}
		for(long long i=1;i<=n;i++){
			a[i]&=t;
		}
	}
	sort(a+1,a+n+1,greater<long long>());
	for(long long i=1;i<=m;i++){
		if(res==0)res=a[i];
		else res&=a[i];
	}
	cout<<res;
	return 0;
}
