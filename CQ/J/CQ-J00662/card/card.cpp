#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=200010;
int a[N],b[N],c[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			c[j]=a[j];
		}
		for(int j=i;j<=n;j++){
			for(int k=j-1;k>=i;k--){
				if(c[k]==c[j]&&c[k]!=0){
					for(int kl=k;kl<j;kl++){
						c[kl]=0;
					}
					break;
				}
			}
		}
		for(int j=i;j<=n;j++){
			b[c[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		printf("%lld ",b[i]);
	}
	return 0;
}
//蜀道难，难于上青天 
/*
4 3
1 2 1 3
*/
