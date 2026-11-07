#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200005],s=0,ans;
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		s+=a[i];
	}
	int l=1,r=a[n],phy=1,nek=n;
	for(int i=1;i<=s/2;i++){
		l++;
		r--;
		if(l>a[phy]){
			phy++;
			l=1;
		}
		if(r<1){
			nek--;
			r=a[nek];
		}
		if(c[phy]==c[nek]){}
		else ans++;
	}
	cout<<ans;
	return 0;
}