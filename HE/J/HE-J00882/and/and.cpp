#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],max1=LLONG_MIN,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);	
	scanf("%lld%lld",&n,&m);
	for(long long i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	if(m==1){
		for(long long i=1;i<=n;i++){
			if(max1<a[i]){
				max1=a[i];
			}
		}
		printf("%lld",max1);
		return 0;
	}
	if(m==2){
		for(long long i=1;i<=n;i++){
			for(long long j=i+1;j<=n;j++){
				if(max1<(a[i]&a[j])){
					max1=a[i]&a[j];
					
				}
			}
		}
		printf("%lld",max1);
		return 0;
	}
	if(m==n){
		for(long long i=1;i<=n;i++){
			ans&=a[i];
		}
		printf("%lld",ans);
		return 0;
	}
	return 0;
}
