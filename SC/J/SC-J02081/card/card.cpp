#include<bits/stdc++.h>
using namespace std;
int a[500003],pos[300003],cnt[300003];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]),pos[a[i]]=i;
	for(int i=1;i<=n;i++){
		int now=i;
		while(now<=n) cnt[a[now]]++,now=pos[a[now]]+1;
	}
	for(int i=1;i<=m;i++) printf("%d ",cnt[i]);
	printf("\n");
	return 0;
}