#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a<b;
}
int main(){
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	long long n;
	long long m;
	long long a[n];
	long long maxn=0;
	scanf("%ll %ll",&n,&m);
	for(long long i=0;i<n;i++){
		scanf("%ll",&a[i]);
	}
	long long x=a[0];
	for(long long i=1;i<m;i++){
		x=a[i]&x;
	}
	printf("%ll",x);
	return 0;
}
