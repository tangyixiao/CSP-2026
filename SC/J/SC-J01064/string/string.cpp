#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int a[N],qz[N];
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int l=1,r=n,ans=0,lid=1,rid=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		rid+=a[i];
		qz[i]=qz[i-1]+a[i];
	}
	while(l<r){
		if(qz[l]-lid+1<=rid-qz[r-1]){
			if(c[l]!=c[r]){
				ans+=qz[l]-lid+1;
			}
			l++;
			rid-=qz[l-1]+1-lid;
			lid=qz[l-1]+1;
		}
		else{
			if(c[l]!=c[r]){
				ans+=rid-qz[r-1];
			}
			r--;
			lid+=rid-qz[r];
			rid=qz[r];
		}
	}
	cout<<ans;
	return 0;
}