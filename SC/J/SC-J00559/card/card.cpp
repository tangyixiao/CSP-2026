#include<cstdio>
const int N=2e6+5;
int a[N],lst[N];
int nxt[N];
int n,m;
int sum[N],cnt[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;++i){
		scanf("%d", &a[i]);
		lst[a[i]]=i;
	}for(int i=1;i<n;++i){
		nxt[i]=lst[a[i]]+1;
	}for(int i=1;i<=n;++i){
		++sum[i];
		sum[nxt[i]]+=sum[i];
	}for(int i=1;i<=n;++i){
		cnt[a[i]]+=sum[i];
	}for(int i=1;i<=m;++i) printf("%d%c", cnt[i], (i==m?'\n':' '));
	return 0;
}