#include<bits/stdc++.h>
using namespace std;
long long a[200005],a1[100005],a2[100005];
char c[200005],c1[100005],c2[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum=0,cmp;
	scanf("%lld",&n);
	for(long long i=1;i<=n;i++){
		scanf("%lld%s",&a[i],&c[i]);
		sum+=a[i];
	}
	cmp=sum/2;
	long long i;
	for(i=1;cmp>0;i++){
		if(cmp>a[i]){
			cmp-=a[i];
			a1[i]=a[i];
			c1[i]=c[i];
		}else{
			a1[i]=cmp;
			c1[i]=c[i];
			cmp=0;
		}
	}
	cmp=sum/2;
	long long j;
	for(j=n;cmp>0;j--){
		if(cmp>a[j]){
			cmp-=a[j];
			a2[n-j+1]=a[j];
			c2[n-j+1]=c[j];
		}else{
			a2[n-j+1]=cmp;
			c2[n-j+1]=c[j];
			cmp=0;
		}
	}
	j=n-j;
	long long x=0;
	for(long long k=1,d=1;k<=i&&d<=j;){
		x+=(c1[k]!=c2[d])*min(a1[k],a2[d]);
		if(a1[k]>a2[d]){
			a1[k]-=a2[d];
			d++;
		}else if(a1[k]==a2[d]){
			d++,k++;
		}else{
			a2[d]-=a1[k];
			k++;
		}
	}
	printf("%lld",x);
	return 0;
}