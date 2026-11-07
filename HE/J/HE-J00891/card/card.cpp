#include<bits/stdc++.h>
using namespace std;
const int N=3e5+10;
const int M=5e5+10;
int n,m,l=1,r=0,a[M],ans[N];
int t[M][2];
int read(){
	int x=0;char c=getchar();
	while(!isdigit(c)){c=getchar();}
	while(isdigit(c)){x=x*10+c-'0';c=getchar();}
	return x;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read(),m=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
		if(!t[a[i]][0])t[a[i]][0]=i;
		else t[a[i]][1]=i;
	}
	for(int i=1;i<=n;i++){
		int u=a[i],pos=i;
		while(pos<n){
			if(pos==t[u][1]){
				pos++;
				ans[u]++;
				u=a[pos];
			}else{
				pos=t[u][1];
				ans[u]++;
				pos++;
				u=a[pos];
			}
		}
	}
	ans[a[n]]=n;
	for(int i=1;i<=m;i++)printf("%d ",ans[i]);
	return 0;
}
