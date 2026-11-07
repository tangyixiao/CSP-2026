#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
ll a[N],n,ans;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		a[i]+=a[i-1];
	}
	ll l=1,r=n,curl=1,curr=a[n];
	while(l<r){
		ll L=a[l]-curl+1;
		ll R=curr-a[r-1];
		if(L==R){
			ans+=L*(c[l]!=c[r]);
			l++,r--;
			curl+=L,curr-=R;
		}
		else if(L<R){
			ans+=L*(c[l]!=c[r]);
			l++;
			curl+=L,curr-=L;
		}
		else{
			ans+=R*(c[l]!=c[r]);
			r--;
			curl+=R,curr-=R;
		}
	}
	cout<<ans;
	return 0;
}
