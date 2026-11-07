#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    freopen("string.out","w",stdout);
	freopen("string.in","r",stdin);
	ll n;
	cin>>n;
	ll a[n];char c[n];
	for(ll i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	ll sum=0,l=0,r=n-1;
	while(l<=r){
		if(a[l]==a[r]){
			if(c[l]!=c[r]){
				sum+=a[l];
			}
			l++;r--;
			continue;
		}
		if(a[l]>a[r]){
			a[l]-=a[r];
			if(c[l]!=c[r]){
				sum+=a[r];
			}
			r--;
		}else{
			a[r]-=a[l];
			if(c[l]!=c[r]){
				sum+=a[l];
			}
			l++;
		}
	}
	cout<<sum;
	return 0;
}