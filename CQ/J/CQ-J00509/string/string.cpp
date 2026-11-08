#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],sum,sum1,sum2,t,ans;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		cin>>c[i];
		sum+=a[i];
	}
	sum/=2;t=n;
	for(int i=1;i<=n;i++){
		sum1+=a[i];sum2=0;
		for(;t>i;t--){
			if(sum2+a[t]<a[i]){
				if(c[i]!=c[t])ans+=a[t];
				sum2+=a[t];
			}else{
				if(c[i]!=c[t]){
					ans+=(a[i]-sum2);
				}a[t]=a[t]-a[i]+sum2;
				break;
			}
		}
		if(sum1>=sum){
			break;
		}
	}
	printf("%lld",ans);
	return 0;
}

