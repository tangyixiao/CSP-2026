#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N=2e5+100;
int n,a[N],an;
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int l=1,r=n;l<=n,l<=r;){
//	cout<<an<<' '<<l<<' '<<r<<' '<<a[l]<<' '<<a[r]<<' '<<c[l]<<' '<<c[r]<<'\n';
		if(a[l]==a[r]){
			if(c[l]!=c[r])an+=a[l];r--;l++;
		}
		else if(a[l]<a[r]){
			if(c[l]!=c[r])an+=a[l],a[r]-=a[l],l++;
			else if(c[l]==c[r])a[r]-=a[l],l++;
		}
		else if(a[l]>a[r]){
			if(c[l]!=c[r])an+=a[r],a[l]-=a[r],r--;
			else if(c[l]==c[r])a[l]-=a[r],r--;
		}
//		cout<<an<<' '<<l<<' '<<r<<' '<<a[l]<<' '<<a[r]<<' '<<c[l]<<' '<<c[r]<<'\n';
	}cout<<an<<'\n';
	return 0;
}
