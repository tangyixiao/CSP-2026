#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=200010;
struct ert{
	int a,b;
}s[N];
bool cmd(ert x,ert y){
	return x.a>y.a;
}
int er(int x){
	int ans=0;
	int sum=1;
	while(x>0){
		ans+=(x%2)*sum;
		x/=2;
		sum*=10;
	}
	return ans;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&s[i].b);
		s[i].a=er(s[i].b);
	}
	sort(s+1,s+n+1,cmd);
	int ans=s[1].b;
	//printf("%d\n",s[1].a);
	for(int i=2;i<=m;i++){
		ans=ans&s[i].b;
	//	printf("%d\n",s[i].a);
	}
	printf("%lld",ans);
	return 0;
}
/*
5 3
31 3 1 15 7
4 2
3 15 12 12
*/
