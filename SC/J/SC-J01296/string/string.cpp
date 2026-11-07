#include<bits/stdc++.h>
using namespace std;
long long a[200010],sum[200010],sum1[200010];
char b[200010];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cout.tie(nullptr);
	 freopen("string.in","r",stdin);
	 freopen("string.out","w",stdout);
	long long n; 
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		sum[i]=sum[i-1]+a[i];
	}
	for(long long i=n;i>=1;i--){
		sum1[i]=sum1[i+1]+a[i];
	}
	long long ans=0,rcnt=n,rnow=0;
	for(long long l=1;l<=n;l++){
		if(rcnt<=l) break;
		if(rnow!=sum[l-1]){
			if(b[rcnt]!=b[l]){
				ans+=min(a[l],rnow-sum[l-1]);
			}
		}
		while(sum[l]>sum1[rcnt]){
			if(b[l]!=b[rcnt]) ans+=a[rcnt];
			rnow=sum1[rcnt];
			rcnt--;
		}
		if(sum[l]==sum1[rcnt]){
			if(b[l]!=b[rcnt]) ans+=a[rcnt];
			rnow=sum1[rcnt];
			rcnt--;
		}
		else if(sum1[rcnt]>sum[l]){
			if(b[l]!=b[rcnt]){
				ans+=sum[l]-sum1[rcnt+1];
			}
		}
	}
	cout<<ans;
	return 0;
}