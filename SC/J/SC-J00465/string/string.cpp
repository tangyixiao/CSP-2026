#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,r,l,sum,ans,a[N],s[N];
char c[N];
int cal(int l1,int r1,int l2,int r2){
	return min(r1,r2)-max(l1,l2)+1;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n,r=n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i],l+=a[i];
	for(int i=n;i;i--) s[i]=s[i+1]+a[i];
	for(int i=1;i<=n;i++){
		while(r&&l-sum<l-s[r]+1) r--;
		while(r&&l-s[r+1]>=l-sum-a[i]+1){
			if(c[i]!=c[r]) ans+=cal(l-sum-a[i]+1,l-sum,l-s[r]+1,l-s[r+1]);
			r--;
		}
		r++,sum+=a[i];
	}
	cout<<ans/2;
	return 0;
}