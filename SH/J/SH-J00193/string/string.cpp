#include<cstdio>
#include<cstdlib>
long long n,l=1,j;
char c[200005],c1[200005];
long long a[200005],a1[200005],x[200005],x1[200005],s;
long long min_(long long a,long long b){
	if(a<b)
		return a;
	return b;
}
long long max_(long long a,long long b){
	if(a>b)
		return a;
	return b;
}
long long deal(long long i,long long j){
	if(j==l)
		return 0;
	if(c[i]==c1[j])
		return 0;
	if(x[i]+a[i]<=x1[j]||x1[j]+a1[j]<=x[i])
		return 0;
	return min_(x[i]+a[i],x1[j]+a1[j])-max_(x[i],x1[j]);
}
bool cross(long long i,long long j){
	if(j==l)
		return 0;
	return !(x[i]+a[i]<=x1[j]||x1[j]+a1[j]<=x[i]);
} 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld%lld %c",&n,&a[0],&c[0]);
	for(long long i=1;i<n;++i){
		scanf("%lld %c",&a[l],&c[l]);
		x[l]=x[l-1]+a[l-1];
		if(c[l]==c[l-1])
			a[l-1]=a[l-1]+a[l];
		else
			++l;
	}
	c1[0]=c[l-1];
	a1[0]=a[l-1];
	for(long long i=1;i<l;++i){
		c1[i]=c[l-i-1];
		a1[i]=a[l-i-1];
		x1[i]=x1[i-1]+a1[i-1];
	}
	for(long long i=0;i<l;++i){
		for(;!cross(i,j);++j);
		for(;cross(i,j);++j)
			s=s+deal(i,j);
		--j;
	}
	printf("%lld",s/2);
	return 0;
} 
