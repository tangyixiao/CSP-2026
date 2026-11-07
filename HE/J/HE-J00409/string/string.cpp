#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200010],ra[200010],ans;
char c[200010],rc[200010];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
		ra[n-i+1]=a[i];
		rc[n-i+1]=c[i];
	}
	for(int i=1;i<=n;i++){
		a[i]=a[i-1]+a[i];
		ra[i]=ra[i-1]+ra[i];
	}
	for(int i=1,j=1;i<=n;i++){
		if(rc[j]!=c[i]){
			ans+=min(a[i],ra[j])-max(ra[j-1],a[i-1]);
		}
		while(ra[j]<a[i]){
			j++;
			if(rc[j]!=c[i]){
				ans+=min(a[i],ra[j])-max(ra[j-1],a[i-1]);
			}
//			cout<<i<<j<<ans<<"\n";
		}
//		cout<<i<<j<<ans<<"\n";
	}
	cout<<ans/2;
	return 0;
} 

/*
T2好麻烦
啊啊啊键盘难用死了 

肚子疼怎么办 

9:10成功写错T2 

这样例咋这么难复制 

9:19终于调对了 
9:22大样例没过 

9:29大样例过了 
*/

