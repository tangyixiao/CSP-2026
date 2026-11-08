#include <bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
long long n,m;
long long num=0,sum=0;
long long a[500000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=0;i<n;i++) scanf("%lld",&a[i]);
	sort(a,a+n,cmp);
	sum=a[1];
	for(int i=0;i<m;i++){
		sum=sum&a[i];
	}
	printf("%lld",&sum); 
	return 0;
} 
