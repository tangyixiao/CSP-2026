#include<bits/stdc++.h>
using namespace std;
int a[200010],c[200010];
int n,m,ans;
void f(int x,int y){
	if(y==m){
		int sum=c[1];
//		printf("%d ",c[1]);
		for(int i=2;i<=m;i++){
			sum&=c[i];
//			printf("%d%c",c[i]," \n"[i==n]);
		}
		ans=max(ans,sum);
		return;
	}
	if(x==n+1&&y!=m) return;
	c[y+1]=a[x];
	f(x+1,y+1);
	f(x+1,y);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	f(1,0);
	printf("%d",ans);
	return 0;
}
/*
4 2
3 15 12 12
*/
/*
5 3
31 3 1 15 7
*/