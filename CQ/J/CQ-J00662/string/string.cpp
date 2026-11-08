#include <bits/stdc++.h>
using namespace std;
const int N=200010;
long long a[N];
char b[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	scanf("%lld",&n);
	for(long long i=1;i<=n;i++){
		scanf("%lld %c",&a[i],&b[i]);
	}
	long long l=1,r=n;
	long long ans=0;
	while(l<=r){
		if(a[l]<=a[r]){
			if(b[l]!=b[r])ans+=a[l];
			a[r]-=a[l];
			a[l]=0;l++;
		}else{
			if(b[l]!=b[r])ans+=a[r];
			a[l]-=a[r];
			a[r]=0;r--;
		}
	}
	printf("%lld",ans);
	return 0;
}
