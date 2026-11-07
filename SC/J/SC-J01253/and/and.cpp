#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and1.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	scanf("%lld%lld",&n,&m);
	long long f[m+1];
	memset(f,0,sizeof(f));
	long long a[n+1];
	for(int i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	bool b[n+1];
	memset(b,1,sizeof(b));
	int h,d;
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++){
			if((a[i]&a[j])>f[2]){
				h=i,d=j;
				f[2]=(a[i]&a[j]);
			}
		}
	b[h]=0,b[d]=0;	
	for(int i=3;i<=m;i++){
		for(int j=1;j<=n;j++)
			if((f[i-1]&a[j]>=f[i])&&b[j]==1){
				d=j;
				f[i]=(f[i-1]&a[j]);
			}
		b[d]=0;
	}
	cout<<f[m];
	return 0;
}