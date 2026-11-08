#include<bits/stdc++.h>
//#define int long long
using namespace std;
int n,m,l;
long long b[200001];
int a[200001][41];
int c[200001],d[200001];
inline void decode(long long x,int y){
	long long key=1<<29;
	for(int i=1;i<=30;i++){
		a[y][i]=x/key;
		x-=key*(x/key);
		key/=2;
	}
	return ;
}
long long key=1<<29;
long long s;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)	scanf("%lld",&b[i]);
	for(int i=1;i<=n;i++)	decode(b[i],i),c[++l]=i;
	for(int j=1;j<=30;j++){
		int u=0,v=0;
		for(int i=1;i<=l;i++)
			if(a[c[i]][j]==1)	d[++v]=c[i],u++;
		if(u>=m){
			for(int i=1;i<=v;i++)	c[i]=d[i];
			l=v;
			s+=key;
		}	
		key/=2;
	}
	printf("%lld",s);
	return 0;
}


