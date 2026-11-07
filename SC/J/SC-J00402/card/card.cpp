#include<bits/stdc++.h>
const int N=5e5+10;
int a[N],last[N],f[N];
int main(){
	std::freopen("card.in","r",stdin);
	std::freopen("card.out","w",stdout);
	int n,m;scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);last[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		f[i]+=1;
		if(i-1==last[a[i-1]]) f[i]+=f[i-1];
		if(last[a[i]]!=i) f[last[a[i]]]+=f[i];
	}
	for(int i=1;i<=m;i++) printf("%d ",f[last[i]]);
	return 0;
}