#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[1000010],b[1000010],c[1000010],ans[1000010];
signed main(){
//	freopen("card6.in","r",stdin);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		b[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		ans[i]=c[a[i]]+1;
		if(b[a[i-1]]<i){
			ans[i]+=ans[i-1];
		}
		c[a[i]]=ans[i];
	}
	for(int i=1;i<=m;i++){
		printf("%lld",c[i]);
		if(i!=m)printf(" ");
	}
	printf("\n");
}
/*
不难发现，在去掉这行注释的情况下，T1=T2>T4>T3 
*/
