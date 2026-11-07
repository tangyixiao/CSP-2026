#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
const int M=2e5+5;
ll a[M];
char b[M];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (ll i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	ll l=1,r=n,cnt=0;
	while (l<=r){
		if (b[l]==b[r]){
			if (a[l]==a[r]) l++,r--;
			if (a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}
			else {
				a[r]-=a[l];
				l++;
			}
		}
		if (b[l]!=b[r]){
			cnt+=min(a[l],a[r]);
			if (a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}
			else if (a[l]==a[r]){
				l++,r--;
			}
			else {
				a[r]-=a[l];
				l++;
			}
		}
	}
	cout<<cnt;
	return 0;
} 
