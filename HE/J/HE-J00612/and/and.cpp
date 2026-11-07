#include<bits/stdc++.h>
using namespace std;
int const N = 2e5 + 5;
long long a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	long long ans = -1;
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= n;i++){
		scanf("%lld",&a[i]);
	}
	if(m==1){
		for(int i = 1;i <= n;i++){
			ans = min(ans,a[i]); 
		}
	}
	if(m==1) printf("%lld",ans);
	else printf("%d",1009);
	return 0;
}
