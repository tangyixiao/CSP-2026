#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200010],a1[200010],top,ans;
signed main(){
//	freopen("and5.in","r",stdin);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=29;i>=0;i--){
		top=0;
		for(int j=1;j<=n;j++){
			if(a[j]&(1<<i)){
				a1[++top]=a[j];
			}
		}
		if(top>=m){
			ans+=(1<<i);
			for(int j=1;j<=top;j++){
				a[j]=a1[j];
			}
			n=top;
		}
	}
	printf("%lld",ans);
}
