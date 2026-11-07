#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n;
long long a[N],ans,sum;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		sum+=a[i];
		cin>>c[i];
	}
	long long l=0,r=sum;
	long long lw=1,rw=n;
	while(l<sum/2&&lw<rw){
		long long ll=l+1,lr=l+a[lw],rl=r-a[rw]+1,rr=r;
		long long sl=sum-rr+1,sr=sum-rl+1;
		if(c[lw]!=c[rw]) ans+=min(lr,sr)-max(ll,sl)+1;
		if(lr==sr) l+=a[lw],r-=a[rw],lw++,rw--;
		else if(lr<sr) l+=a[lw],lw++;
		else r-=a[rw],rw--;
	}
	printf("%lld",ans);
	return 0;
}//What do you even want me to be? 
