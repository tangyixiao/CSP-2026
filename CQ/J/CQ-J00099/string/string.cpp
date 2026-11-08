#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int sum2,ans,l,r,n,sum,a[200005];
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	l=1;
	r=n;
	for(int i=1;i<=n;i++){
		if(a[l]<a[r]){
			ans+=(c[l]!=c[r])*min(sum/2-sum2,a[l]);
			if(sum2+a[l]>=sum/2){
				break;
			} 
			sum2+=a[l];
			a[r]-=a[l];
			l++;
		}
		else{
			ans+=(c[l]!=c[r])*min(sum/2-sum2,a[r]);
			if(sum2+a[r]>=sum/2){
				break;
			} 
			sum2+=a[r];
			a[l]-=a[r];
			r--;
		}
	}
	cout<<ans;
	return 0;
}
