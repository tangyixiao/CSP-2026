#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int a[N];
char c[N];
char am[N];
int n;
long long sb[N],sd[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	long long L=1;
	for(int i=1;i<=n;i++){
		sb[i]=L;
		scanf("%d",&a[i]);
		c[i]=getchar();
		c[i]=getchar();
		am[i]=c[i];
		L+=a[i];
		sd[i]=L-1;
	}
	L--;
	
	if(L<1e5){
		long long ans=0;
		for(int i=1;i<=n;i++){
			string s="";
			for(int j=1;j<=a[i];j++){
				s+=am[i];
			}
			for(int j=1;j<(L/2);j++){
				if(s[j]!=s[L-j+1]){
					ans++;
				}
			}
		}
		cout<<ans;
	}else{
	long long l=1,r=n;
	long long ll,lr,rl,rr;
	long long ans=0;
	while((sd[l]<=(L/2+1))&&(sb[r]>=(L/2+1))){
		ll=sb[l],lr=sd[l],rl=sb[r],rr=sd[r];
		if(lr-ll+1>=rr-rl+1){
			if(c[l]!=c[r]){
				ans+=rr-rl+1;
			}
			r--;
			sb[l]+=rr-rl+1;
		}else{
			if(c[l]!=c[r]){
				ans+=lr-ll+1;
			}
			l++;
			sd[l]-=lr-ll+1;
		}
	}
	printf("%lld",ans);
}
	return 0;
}
