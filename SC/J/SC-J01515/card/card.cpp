#include<bits/stdc++.h>
using namespace std;
long long a[500005];
long long b[300005],c[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++)scanf("%lld",&a[i]);
	for(long long i=1;i<=n;i++){
		for(long long j=i;j<=n;j++){
			if(b[a[j]]>0){
				for(long long k=b[a[i]];k<j;k++)b[a[k]]=0;
			}
			b[a[j]]=j;
		}
		for(long long j=1;j<=m;j++)if(b[j]>0){
			c[j]++;
			b[j]=0;
		}
	}
	for(long long i=1;i<=m;i++)printf("%lld ",c[i]);
	return 0;
}