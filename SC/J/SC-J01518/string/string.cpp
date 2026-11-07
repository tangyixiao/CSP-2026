#include<bits/stdc++.h>
using namespace std;
#define fo(i,begin,end) for(int i=begin;i<=end;++i)
#define ll long long
const int N=2e5+5;
int n,a[N];
char c[N];
ll ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	fo(i,1,n) cin>>a[i]>>c[i];
	int l=1,r=n;
	while(l<r){
		ll s=a[l],res=0;
		while(1){
			ll add=a[r];
			if(res+add>s) add=s-res;
			res+=add;
			if(c[r]!=c[l]) ans+=add;
			a[r]-=add;
			if(!a[r]) --r;
			if(res==s) break;
		}
		a[l]=0,l++;
	}
	cout<<ans;
	return 0;
}