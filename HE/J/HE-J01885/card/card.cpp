#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[600000];
int b[600000];
int pre[600000];

long long ans[600000];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	if(n>10000){
		for(int i=1;i<=n;i++){
			if(a[i]!=a[n])  ans[a[i]]++,ans[a[n]]++;
			else  ans[a[i]]++;
		}
		for(int i=1;i<=m;i++)  printf("%lld ",ans[i]);
		return 0;
	} 
	for(int i=1;i<=n;i++){
		fill(pre+1,pre+n+1,0);
		fill(b+1,b+n+1,0);
		int p=0;
		for(int j=i;j<=n;j++){
			if(!pre[a[j]])  pre[a[j]]=++p,b[p]=a[j];
			else{
				for(int k=pre[a[j]]+1;k<=p;k++)  pre[b[k]]=0;
				p=pre[a[j]];
			}
		}
		for(int j=1;j<=p;j++)  ans[b[j]]++;
	}
	for(int i=1;i<=m;i++)  printf("%lld ",ans[i]);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
