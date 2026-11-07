#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[2010000],ans=-100,l,r,c[201000];
char s[204000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a+1,a+n+1);
	if(m==1){
		cout<<a[n];
	}
	else{
		if(m==n){
			for(int i=2;i<=n;i++){
				a[i]=(a[i]&a[i-1]);
			}
			cout<<a[n];
		}
		else{
			if(m==2){
				for(int i=1;i<=n;i++){
					for(int j=1;j<=n;j++){
						if(i!=j){
							ans=max(ans,(a[i]&a[j]));
						}
					}
				}
				cout<<ans;
			}
			else{
				for(int i=1;i<=5*10000000/m;i++){
					for(int j=1;j<=m;j++){
						srand(time(0)+i*j);
						l=rand()%(n-j+1)+1;
						c[j]=a[l];
						a[l]=a[n];
					}
					for(int j=2;j<=m;j++){
					c[j]=(c[j]&c[j-1]);
					}
					ans=max(ans,c[n]);
				}
				cout<<ans;
			}
		}
	}
	return 0;
}
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother