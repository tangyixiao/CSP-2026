#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m;
int a[N],lst[M];
int w[N],f[i],ans[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		lst[a[i]]=i,w[i]=1;
	}
	for(int i=n;i>=1;i--) f[i]=lst[a[i]]+1;
	for(int i=1;i<=n;i++){
		ans[a[i]]+=w[i];
		w[f[i]]+=w[i];
	}
	for(int i=1;i<=m;i++) printf("%d ",ans[i]);
	return 0;
}
/*
也许你早就放下了过去，
但我想让你知道，
我一直把那当做我最美好的回忆。
*/
