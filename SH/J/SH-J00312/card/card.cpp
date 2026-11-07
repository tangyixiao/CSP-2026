#include <bits/stdc++.h>
using namespace std;

const int N=5e5+10;

int n,m,a[N],nex[N],last[N],l[N],ans[N];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
		last[i]=l[a[i]];
		nex[last[i]]=i;
		l[a[i]]=i;
	}
	for(int i=1;i<=n;++i){
		int now=i;
		while(now<=n){
			while(nex[now]) now=nex[now];
			++ans[a[now]];
			++now;
		}
	}
	for(int i=1;i<=m;++i)
		printf("%d ",ans[i]);
	return 0;
}
