#include <bits/stdc++.h>
#define int long long
using namespace std;
inline int read(){
	int x=0,c=getchar();
	while(!isdigit(c))c=getchar();
	while(isdigit(c))x=x*10+c-48,c=getchar();
	return x;
}
const int MAXN=2e5+5;
int a[MAXN];
int ans;
int n,m;
signed main(){
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	n=read(),m=read();
	for(int i=1;i<=n;++i)a[i]=read();
	sort(a+1,a+n+1,greater<int>());
	ans=a[1];
	for(int i=2;i<=m;++i)ans=(ans&a[i]);
	printf("%lld",ans);
	return 0;
}
