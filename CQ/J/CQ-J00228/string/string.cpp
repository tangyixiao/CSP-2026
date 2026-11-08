#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200005],j,cnt,ans,l,h[200005];
char c[200005];
signed main(){
	//printf()
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) scanf("%lld %c",&a[i],&c[i]);
	for(int i=1;i<=n;i++) h[i] = h[i-1]+a[i];
	j = n;
	for(int i=1;i<=n;i++){
		cnt -= a[i];
		if(h[i]>h[n]/2) cnt = -(h[n]/2-h[i-1]);
		while(cnt<0&&i<=j){
			if(cnt+a[j]<=0){
				if(c[i]!=c[j]) ans += a[j];
				cnt += a[j--];
			}
			else{
				if(c[i]!=c[j]) ans += abs(cnt);
				a[j] += cnt , cnt = 0;
			}
		} 
	}
	cout<<ans;
	return 0;
}

