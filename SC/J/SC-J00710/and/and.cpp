#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    freopen("and.out","w",stdout);
	freopen("and.in","r",stdin);
	ll n,m;
	cin>>n>>m;
	ll a[n],ma=-1,s[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==2){
	    for(ll i=0;i<n;i++){
	   	    for(ll j=i+1;j<n;j++){
	   	    	ma=max(ma,a[i]&a[j]);
			}
	    }	
	    cout<<ma;
	    return 0;
	}
	sort(a,a+n-1);
	s[0]=a[n-1];
	for(ll i=1;i<m;i++){
		s[i]=s[i-1]&a[n-i-1];
	}
	cout<<s[m-1];
	return 0;
}