#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,cnt[32],a[N];
long long ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
	while(n){
		for(int j=0;j<=30;j++) cnt[j]=0; 
	    for(int i=1;i<=n;i++) for(int j=0;j<=30;j++) if(a[i] & 1LL<<j) cnt[j]++;
		int sz=0;
		for(int i=30;i>=0;i--){
	        if(cnt[i]>=m){
	        	ans|=1LL<<i; 
	        	for(int j=1;j<=n;j++){
	        		if(a[j] & 1LL<<i) a[++sz]=a[j]^(1LL<<i);
				}
	        	break;
			}
	    }
	    n=sz;
	}
	cout<<ans;
	return 0;
}

