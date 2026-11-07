#include <bits/stdc++.h>
using namespace std;
long long n,k,x[200010],cnt,ans;
bool fl[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld %lld",&n,&k);
	for(long long i=1;i<=n;++i) scanf("%lld",&x[i]);
	for(long long i=30;i>=0;--i){
		cnt=0;
		for(long long j=1;j<=n;++j){
			if(fl[j]) continue;
			if((x[j]>>i)%2) ++cnt;
		}
		if(cnt>=k){
			ans+=1<<i;
			for(long long j=1;j<=n;++j) if((x[j]>>i)%2==0) fl[j]=true;
		}
	}
	printf("%lld",ans);
	return 0;
} 
