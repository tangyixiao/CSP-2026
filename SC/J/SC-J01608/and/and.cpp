#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,m,ans,a[N];
bool cmp(int x,int y){
	return x>y;
}
signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1; i<=n; i++) cin>>a[i];
	if(n<=20) {
		for(int i=1; i<(1<<n); i++) {
			int x=i,tmp=(1<<20)-1,cnt=0;
			for(int j=0; j<n; j++) {
				if(((x>>j)&1)==1) cnt++,tmp&=a[j+1];
			}
			if(cnt>=m) ans=max(ans,tmp);
		}
		cout<<ans;
	} else if(n<=2000) {
		if(m==1) for(int i=1; i<=n; i++) ans=max(ans,a[i]);
		else if(m==n) {
			ans=(1<<20)-1;
			for(int i=1; i<=n; i++) ans&=a[i];
		} else if(m==2) for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) if(i!=j) ans=max(ans,a[i]&a[j]);
		cout<<ans; 
	} else if(n<=N) {
		if(m==n-1){
			vector<int> pre1(n+1,0),pre2(n+2,0);
			pre1[0]=(1<<20)-1,pre2[n+1]=(1<<20)-1;
			for(int i=1; i<=n; i++) pre1[i]=pre1[i-1]&a[i];
			for(int i=n; i>=1; i--) pre2[i]=pre2[i+1]&a[i];
			for(int i=1; i<=n; i++) {
				int tmp;
				if(i==1) tmp=pre2[2];
				else if(i==n) tmp=pre1[n-1];
				else tmp=(pre1[i-1]&pre2[i+1]);
				ans=max(ans,tmp);
			}
		} else {
			bool A=1,B=1;
			for(int i=1; i<=n; i++) {
				if(__lg(a[i])==__lg(a[i]+1)) A=0;
				if(a[i]!=i-1) B=0;
			}
			if(A==1) {
				sort(a+1,a+1+n,cmp);
				ans=a[m];
			}
			if(B==1) {
				ans=(n-m);
				while(ans&1) ans>>=1; 
			}
		}		 
		cout<<ans;
	}
	return 0;
}