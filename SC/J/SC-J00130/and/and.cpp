#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,m,a[N],ans;
bool vis[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	for(int i=30;i>=0;i--){
		int num=0;
		for(int j=1;j<=n;j++){
			if(!vis[j]&&(a[j]&(1ll<<i))){ 
				num++;
			}	
		}
		if(num<m)
			continue;
		ans+=(1ll<<i);
		for(int j=1;j<=n;j++){
			if((a[j]&(1ll<<i))==0){
				if(!vis[j]){
					vis[j]=1;
				}
			}
		}
	}
	printf("%lld",ans);
	return 0;
}