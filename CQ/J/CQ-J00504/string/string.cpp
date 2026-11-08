#include<bits/stdc++.h>
using namespace std;
namespace zjp{
	#define int long long
	const int N=2e5;
	int n;
	int a[N+5];
	char c[N+5];
	signed main(){
		ios::sync_with_stdio(false);
		cin.tie(0);cout.tie(0);
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
		int l=1,r=n,ans=0;
		while(l<r){
			if(a[l]<a[r]){
				a[r]-=a[l];
				if(c[l]!=c[r]) ans+=a[l];
				++l;
			}
			else if(a[l]>a[r]){
				a[l]-=a[r];
				if(c[l]!=c[r]) ans+=a[r];
				--r;
			}
			else{
				if(c[l]!=c[r]) ans+=a[l];
				++l;
				--r;
			}
		} 
		cout<<ans;
		return 0;
	} 
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	return zjp::main(); 
}
