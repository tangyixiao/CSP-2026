#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5;
ll a[N],n,cnt;
char s[N];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(ll i=1; i<=n; i++)cin>>a[i]>>s[i];
	ll l=1,r=n;
	while(l<=r) {
		if(s[l]!=s[r])cnt+=min(a[l],a[r]);
		if(a[l]<a[r]) a[r]-=a[l],l++;
		else a[l]-=a[r],r--;
	}
	cout<<cnt;
}