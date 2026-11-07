#include<bits/stdc++.h>
using namespace std;
const int N=2e5+9;
int n,a[N],c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		char cc;
		cin>>cc;
		c[i]=cc;
	} 
	int l=1,r=n;
	long long ans=0;
	while(l<=r){
//		cout<<l<<","<<r<<","<<a[l]<<endl;
		int mv=min(a[l],a[r]);
		ans+=(c[l]!=c[r])*mv;
		a[l]-=mv;
		a[r]-=mv;
		if(a[l]<=0)l++;
		if(a[r]<=0)r--;
	}
	cout<<ans<<endl;
	return 0;
}
