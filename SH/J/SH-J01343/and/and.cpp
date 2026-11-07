//T3 - and
#include<cstdio>
const int N = 2e5 + 5;
int n,m,a[N],ans,nxt[N],prv[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		nxt[i]=i+1;prv[i]=i-1;
	}
	nxt[0]=1;prv[n+1]=n;
	for(int i=30;i>=0;i--){
		int now=nxt[0];
		int sum=0;
		while(now!=n+1){
			if((a[now]>>i)&1){
				sum++;
			}
			now=nxt[now];
		}
		if(sum>=m){
			ans|=1<<i;
			now=nxt[0];
			while(now!=n+1){
				if(!((a[now]>>i)&1)){
					nxt[prv[now]]=nxt[now];
					prv[nxt[now]]=prv[now];
				}
				now=nxt[now];
			}
		}
	}
	printf("%d\n",ans);
	fclose(stdin);fclose(stdout);
	return 0;
}
