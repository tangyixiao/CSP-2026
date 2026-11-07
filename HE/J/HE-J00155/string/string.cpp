#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2E5+10;
int n,a[N],ans;
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i]; 
	if(n==1){
    	cout<<0;
    	return 0;
	}
	if(n==2){
		if(c[1]==c[2]) cout<<0;
		else cout<<min(a[1],a[2]);
		return 0;
	}
	int l=1,r=n,p=a[1],q=a[n];
	while(l<=r){
		if(c[l]==c[r]){
			if(p<q) q-=p,p=a[++l];
			else p-=q,q=a[--r];
		}
		else{
			if(p<q) ans+=p,q-=p,p=a[++l];
			else ans+=q,p-=q,q=a[--r];
		}
	}
	cout<<ans;
	return 0;
}
