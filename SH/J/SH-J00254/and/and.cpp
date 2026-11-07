#include <bits/stdc++.h>
using namespace std;
#undef int
#define int long long
int a[40][200010];
int b[200010];
int n,m;
int x;
int ans=0;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;++i){
		scanf("%lld",&b[i]);
		for(int j=30;j>=0;--j){
			if(b[i]&(1<<j)){
				a[j][++a[j][0]]=b[i];
			}
		}
	}
	for(int i=30;i>=0;--i){
		if(a[i][0]>=m){
			ans+=1<<i;
			n=a[i][0];
			for(int j=1;j<=n;++j){
				b[j]=a[i][j];
			}
			for(int j=0;j<=i-1;++j) a[j][0]=0; 
			for(int k=1;k<=n;++k){
				for(int j=i-1;j>=0;--j){
					if(b[k]&(1<<j)){
						a[j][++a[j][0]]=b[k];
					}
				}
			}
		}
//		printf("----------------------\n");
//		printf("i=%lld\n",i);
//		for(int j=0;j<=i-1;++j){
//			printf("j=%lld ",j);
//			for(int k=1;k<=a[j][0];++k) printf("%lld ",a[j][k]);
//			printf("\n");
//		}
//		printf("ans=%lld\n",ans);
//		printf("----------------------\n");
	}
	printf("%lld",ans);
	return 0;
}
