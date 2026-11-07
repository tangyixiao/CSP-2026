#include <bits/stdc++.h>
using namespace std;
const int N=200004;
long long n,l,r,ans,a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	l=1,r=n;
	while(l<r){
		if(a[l]<a[r]){
			ans+=(c[l]!=c[r])*(a[l]);
			a[r]-=a[l];
			l++;
		}else{
			ans+=(c[l]!=c[r])*(a[r]);
			a[l]-=a[r];
			r--;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
