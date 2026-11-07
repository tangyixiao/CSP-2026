#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200005],t[200005],sum1,sum2,ans;
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin >> n;
	for(int i=1;i<=n;i++)cin >> a[i] >> c[i];
	for(int i=1,j=n;i<j;){
		if(c[i]==c[j]){
			if(a[i]>a[j]){
				if(c[j-1]==c[j])a[j-1]-=a[i]-a[j];
				else ans+=a[i]-a[j];
				j--;
			}else if(a[j]>a[i]){
				if(c[i+1]==c[i])a[i+1]-=a[j]-a[i];
				else ans+=a[j]-a[i];
				i++;				
			}else i++,j--;
		}else{
			ans+=min(a[i],a[j]);
			if(a[i]>a[j])a[i]-=a[j],j--;
			else a[j]-=a[i],i++;
		}
	}cout << ans;
	return 0;
}
