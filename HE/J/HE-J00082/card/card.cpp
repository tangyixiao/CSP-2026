#include <bits/stdc++.h>
#define int long long
using namespace std;
inline int read(){
	int x=0,c=getchar();
	while(!isdigit(c))c=getchar();
	while(isdigit(c))x=x*10+c-48,c=getchar();
	return x;
}
const int MAXN=5e5+5,MAXM=3e5+5;
int a[MAXN];
int n,m;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read(),m=read();
	for(int i=1;i<=n;++i){
		a[i]=read();
	}
	printf("%d",n);
	return 0;
}
