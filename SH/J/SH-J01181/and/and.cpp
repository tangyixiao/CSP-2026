#include<cstdio>
#include<cstring> 
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, a[200005], u, restSum, r, s=0;
	bool rest[200005], TIU[200005];
	scanf("%d%d", &n, &m);
	restSum=n;
	for(int i=1;i<=n;i++){
		scanf("%d", &a[i]);
		rest[i]=1;
	}
	for(int i=30;i>=0;i--){
		u=1<<i;
		r=0;
		memset(TIU, 0, sizeof(TIU));
		for(int j=1;j<=n;j++){  
			if(!rest[j]) continue;
			if(a[j]&u){
				r++;
				TIU[j]=1;
			}
		}
		//printf("%d %d\n", r, m);
		if(r<m) continue;
		s|=u;
		restSum=r;
		for(int j=1;j<=n;j++){
			rest[j]=TIU[j];
		}
	}
	printf("%d", s);
	return 0;
}
