#include<bits/stdc++.h>
using namespace std;
long long n,m,sum,f[40];
bool ans[40];
struct b{
	bool g[40],flag;
	int l;
}a[200005];
void r(long long n,int x){
	int i=1;
	while(n){
		a[x].g[i]=n%2;
		f[i]+=n%2;
		n/=2;
		i++;
	}
	a[x].l=i-1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&sum);
		r(sum,i);
	}
	for(int i=31;i>=1;i--){
		if(f[i]>=m){
			ans[i]=1;
			for(int j=1;j<=n;j++){
				if(a[j].flag)continue;
				if(a[j].g[i]==0){
					a[j].flag=1;
					for(int k=1;k<=a[j].l;k++){
						f[k]-=a[j].g[k];
					}
				}
			}
		}
	}
	long long ans1=0;
	for(int i=1;i<=31;i++){
		if(ans[i])ans1+=pow(2,i-1);
	}
	printf("%lld",ans1);
	return 0;
}