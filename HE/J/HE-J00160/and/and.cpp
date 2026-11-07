#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+50;
int n,m,a[N],ans=LLONG_MIN;
bool flag=true,flag1=true;
inline void dfs(int x,int step,int now) {
	if(x>n) {
		return;
	}
	if(step==m) {
		if(now<=ans) {
			return;
		}
		ans=now;
		return;
	}
	if(step>m) {
		return;
	}
	for(int i=x+1;i<=n;i++) {
		dfs(i,step+1,(now&a[i]));
	}
}
int32_t main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld %lld",&n,&m);
	for(int i=1;i<=n;i++) {
		scanf("%lld",&a[i]);
		if(a[i]!=i-1) {
			flag=false;
		} 
		if(i!=1) {
			if(a[i]-a[i-1]!=1<<(i-1)) {
				flag1=false;
			}
		}
	}
	if(flag) {
		printf("0");
		return 0;
	}
	if(flag1) {
		printf("%lld",a[1]);
		return 0;
	}
	for(int i=1;i<=n;i++) {
		dfs(i,1,a[i]);
	}
	printf("%lld",ans);
	return 0;
} 
