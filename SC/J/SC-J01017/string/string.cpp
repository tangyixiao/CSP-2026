#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],l,r,cnt,ans,len[200005];
char s[200005];
bool is;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld %c",&a[i],&s[i]);
		len[i]=len[i-1]+a[i];
	}
	l=1;
	r=n;
	while(1){
		int rr=len[n]-len[r-1]-cnt,ll=len[l]-cnt;
		if(rr==ll){
			if(s[l]!=s[r]){
				ans+=ll;
			}
			cnt+=ll;
			l++;
			r--;
		}else if(rr<ll){
			if(s[l]!=s[r]){
				ans+=rr;
			}
			cnt+=rr;
			r--;
		}else{
			if(s[l]!=s[r]){
				ans+=ll;
			}
			cnt+=ll;
			l++;
		}
		if(cnt>=len[n]/2){
			break;
		}
	}
	printf("%lld",ans);
}