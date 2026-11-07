#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n,m,sum,ma;const int N=5e5+100;
LL a[N],cnt[N];bool f;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		if(a[i]<a[i-1] && i!=1)f=true;
		cnt[a[i]]=i;
	
		
	}
	if(!f){
		for(int i=1;i<=m;i++){
				printf("%lld ",cnt[a[i]]);
			
		}
		return 0;
	}
}