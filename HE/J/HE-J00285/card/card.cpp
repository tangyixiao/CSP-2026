#include<bits/stdc++.h>
using namespace std;
int n,m,k,ton[300010],a[500010],fa[500010][4],ans[300010];
void faz(){
	for(int i=1;i<=n;i++){
		if(fa[i][0]==0)fa[i][0]=i;
	}
	for(int i=1;i<=n;i++){
		fa[i][1]=fa[fa[i][0]][0];
	}
	for(int l=2;l<=20;l++){
		for(int i=1;i<=n;i++){
			fa[i][1]=fa[fa[i][1]][1];
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",a+i);
		if(ton[a[i]]>0)fa[ton[a[i]]][0]=i;
		ton[a[i]]=i;
	}
	faz();
	for(int qwq=1;qwq<=n;qwq++){
		for(int i=qwq;i<=n;i++){
			ans[a[i]]++;
			i=fa[i][1];
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
