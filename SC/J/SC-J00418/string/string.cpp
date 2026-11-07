#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,ans=0,a[200005],sum=0;
char c[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(ll i=1;i<=n;i++) cin>>a[i]>>c[i];
	for(ll i=1,j=n;i<=j;i++,j--){
		if(sum!=0){
			if(sum>0){
				if(c[j]!=c[i-1]){
					ans+=min(abs(sum),a[j]);
					sum-=a[j];
				}
			}else if(sum<0){
				if(c[i]!=c[j+1]){
					ans+=min(abs(sum),a[i]);
					sum+=a[i];
				}
				
			}
		}
		if(c[i]!=c[j]){
			sum=a[i]-a[j];
			ans+=min(a[i],a[j]);
		}else ans+=a[i]-a[j];
	}
	cout<<ans;
	return 0;
}