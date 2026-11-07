#include <iostream>
using namespace std;
long long n,m,maxn;
long long a[100005];

long long lov(long long l,long long o,long long v){
	long long e=0;
	if (o!=1){ 
		for (long long i=v+1;i<=n;i++){
			e=max(e,lov(a[i],o-1,i));
		}
	}
	else {
		for (long long i=v+1;i<=n;i++){
			e=max(e,l&a[i]);
		}
	}
	return e;
}
long long tyy(long long x,long long y,long long z){
	long long ma=0;
	ma=max(ma,lov(a[z],m,z));
	return ma;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for (long long i=1;i<=n;i++){
		maxn=max(maxn,tyy(a[i],m,i));
	}
	cout<<maxn;
} 