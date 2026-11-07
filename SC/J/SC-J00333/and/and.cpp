#include<bits/stdc++.h>
using namespace std;
int a[200005],g[200005][2005];
int f(int x,int y){
	if(x<y)return 0;
	if(y==1){
		int w=0;
		for(int i=1;i<=x;i++)w=max(w,a[i]);
		return w;
	}
	if(x==1)return a[1];
	if(g[x][y]!=-1)return g[x][y];
	int v=max(f(x-1,y),f(x-1,y-1)&a[x]);
	g[x][y]=v;
	return v;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	memset(g,-1,sizeof(g));
	int n,m,maxn=0,sum;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		maxn=max(maxn,a[i]);
		if(i==1)sum=a[i];
		else sum=sum&a[i];
	}
	if(m==1)printf("%d\n",maxn);
	else if(m==n)printf("%d\n",sum);
	else if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
		printf("%d\n",ans);
	}
	else printf("%d\n",f(n,m));
	return 0;
}