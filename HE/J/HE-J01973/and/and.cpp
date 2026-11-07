#include <bits/stdc++.h>
using namespace std;
long long cc=0;
long long tt(long long tta){
	cc=0;
	long long ttb=0;
	while(tta>0){
		ttb=ttb*10+tta%2;
		tta=tta/2;
		cc++;
	}
	return ttb;
}
long long sq(long long sqa){
	long long sqc=1;
	for(long long i=1;i<sqa;i++){
		sqc=sqc*10;
	}
	return sqc;
}
long long co(long long coa){
	long long cot=tt(coa),coc=0;
	for(long long i=1;i<=cc;i++){
		if(cot/sq(i)%10==1)
		coc++;
	}
	return coc;
}
bool ct(long long a,long long b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long a[n+2];
	for(long long i=1;i<=n;i++) cin>>a[n+2];
	sort(a+1,a+n+1);
	long long b[n+2];
	for(long long i=1;i<=n;i++) b[i]=a[i];
	sort(b+1;b+n+1,ct);
	b[0]=0;
	for(long long i=1;i<=n;i++) b[i]=b[i]&b[i-1];
	cout<<b[m+1];
	return 0;
}
