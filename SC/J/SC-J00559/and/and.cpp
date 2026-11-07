#include<cstdio>
const int N=2e6+5;
int n,m;
int a[N];
int can[N],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;++i){
		scanf("%d", &a[i]);
		can[i]=1;
	}for(int i=29;~i;--i){
		int cnt=0;
		for(int j=1;j<=n;++j) if((a[j]>>i)&1) cnt+=can[j];
		if(cnt>=m){
			ans|=(1<<i);
			for(int j=1;j<=n;++j) can[j]&=((a[j]>>i)&1);
		}
	}printf("%d\n", ans);
	return 0;
}