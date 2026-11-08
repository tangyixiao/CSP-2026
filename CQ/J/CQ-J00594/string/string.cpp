#include<bits/stdc++.h>
using namespace std;
using LL=long long;
const int N=3e5+5;
LL n,idx=1,p,cnt;
LL id[N],a[N];
char z[N],c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(LL i=1;i<=n;i++){
		scanf("%lld %c",&a[i],&c[i]);
		if(z[p]!=c[i]){
			id[++p]=idx;
			z[p]=c[i];
		}
		idx=idx+a[i];
	}
	id[++p]=idx;
	idx--;
	LL l1=1,r1=idx;
	for(LL i=1;l1<=idx/2;i++){
		LL l2=id[i+1]-1;
		LL r2=idx-l2+1;
		LL k1=upper_bound(id+1,id+p+1,r2)-id-1;
		LL k2=upper_bound(id+1,id+p+1,r1)-id-1;
		for(LL k=k1;k<=k2;k++){
			if(z[i]!=z[k]){
				LL tmp=id[k+1]-id[k];
				if(id[k]<r2) tmp-=r2-id[k];
				if(id[k+1]-1>r1)
					tmp-=id[k+1]-1-r1;
				cnt+=tmp;
			}
		}
		l1=l2+1;
		r1=r2-1;
	}
	printf("%lld",cnt);
	return 0;
}
