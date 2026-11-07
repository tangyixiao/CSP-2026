#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[200020],m,mx=-1,mmax=-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	if(m==1){
		cout<<mx;
		return 0;
	}else if(m==2){
		for(ll i=1;i<=n;i++){
			for(ll j=i+1;j<=n;j++){
				mmax=max(mmax,a[i]&a[j]);
			}
		}
		cout<<mmax;
		return 0;
	}else{//A
		sort(a+1,a+1+n);//升序 
		cout<<a[n-m+1];
		return 0;
	}
	return 0;
}