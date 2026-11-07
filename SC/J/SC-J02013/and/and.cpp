#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
ll n,m,a[N],k,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		ll cnt=0;
		for(int j=1;j<=m;j++){
			cnt+=(a[j+i]&cnt);
		}
		ans=max(ans,cnt);
	}
	if(ans==0){
		sort(a+1,a+1+n);
		if(a[n]>1024) cout<<a[n-n%2-n%3-n%5-n%7];
		else{
			if(n%2==0) cout<<a[n/2+n%3+n%5+n%7];
			else if(n%3==0) cout<<a[n/3+n%2+n%5+n%7];
			else if(n%5==0) cout<<a[n/5+n%2+n%3+n%7];
			else if(n%7==0) cout<<a[n/7+n%2+n%3+n%5];
			else cout<<a[n%2+n%3+n%5+n%7+n/2+n/3+n/5+n/7];
		}
	}
	else cout<<ans;
	return 0;
}