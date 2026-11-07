#include<bits/stdc++.h>
using namespace std;
long long a[2005][2005];
long long n,m;
long long v(long long i,int j){
	if(j==m)return a[i][j];
	long long ma=0;
	for(long long k=i+1;k<=n;k++){
		ma=max(ma,a[i][j]&v(k,j+1));
	}
	return ma;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	long long ma=0;
	for(long long i=1;i<=n;i++){
		scanf("%lld",&a[i][1]);
		if(a[i][1]>ma)ma=a[i][1];
//		for(long long j=2;j<=m;j++){
//			a[i][j]=a[i][1];
//		}
	}
	cout<<ma;
	return 0;
}