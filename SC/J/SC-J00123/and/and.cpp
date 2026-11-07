#include <bits/stdc++.h>
using namespace std;
long long n,m,num,k;
long long a[200005];
bool cmp(long long i,long long j){
	return i>j;
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a+1,a+n+1,cmp);
	num=a[1];
	for(int i=1;i<=m;i++){
		num&=a[i];
	}
	printf("%lld",num);
	return 0;
}