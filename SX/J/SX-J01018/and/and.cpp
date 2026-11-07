#include <bits/stdc++.h>
using namespace std;
long long n,m,x[200005],maxn;
long long dp(long long num,long long time){
	if(time==0){
		long long p=floor(pow(2,32)-1);
		return p;
	}
	long long maxn=0;
	for(int i=num;i<n;i++){
		maxn=max(maxn,x[i]&dp(i+1,time-1));
	}
	return maxn;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%lld",&x[i]);
	}
	cout<<dp(1,m);
	return 0;
}