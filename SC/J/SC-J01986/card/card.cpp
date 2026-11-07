#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=500005;
ll n,m,a[MAXN],f[MAXN],ans[MAXN];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) f[j]=0; 
		for(int j=i;j<=n;j++){
			if(f[a[j]]){
				for(int k=f[a[j]];k<j;k++) f[a[k]]=0;
			}
			f[a[j]]=j;
		}
		for(int j=1;j<=m;j++)
			if(f[j]) ans[j]++;
	}
	for(int i=1;i<=m;i++) printf("%lld ",ans[i]);
	return 0;
} 