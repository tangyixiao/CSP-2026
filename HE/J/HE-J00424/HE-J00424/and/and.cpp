#include<bits/stdc++.h>
using namespace std;
long long dp[200005],n,m,a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	long long x=0;
	if(m==1){
		for(int i=1;i<=n;i++) x=max(x,a[i]);
		cout<<x;
		return 0;
	}else if(m==n){
		x=a[1];
		for(int i=2;i<=n;i++) x&=a[i];
		cout<<x;
		return 0;
	}
	return 0;
}

