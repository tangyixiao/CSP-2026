#include<iostream>
using namespace std;

typedef long long ll;
const int N=2e5+20;
int n,m;
ll a[N],cz[N],ans;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	if(m==n){
		ll num=a[1];
		for(int i=2;i<=n;i++){
			num&=a[i];
		}
		printf("%lld",num);
		return 0;
	}
	if(m==2){
		ll num=-1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j){
					num=max(num,a[i]&a[j]);
				}
			}
		}
		printf("%lld",num);
		return 0;
	}
	if(m==1){
		ll num=-1;
		for(int i=1;i<=n;i++){
			num=max(num,a[i]);
		}
		printf("%lld",num);
		return 0;
	}
	if(n<=20){
		for(int i=0;i<(1<<n);i++){
			int k=0;
			for(int j=1;j<=n;j++){
				if((i>>(j-1))&1){
					cz[++k]=a[j];
				}
			}
			if(k==m){
				ll num=cz[1];
				for(int j=2;j<=k;j++){
					num&=cz[j];
				}
				ans=max(ans,num);
			}
		}
		printf("%lld",ans);
	}
	return 0;
}