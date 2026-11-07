#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ll n,m,a[1010],s=0;
    cin>>n>>m;
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	for(ll i=0;i<n;i++){
		for(ll j=0;j<n;i++){
			if(a[i]==a[j]){
				if(a[i]>s)s=a[i];
			}
		}
	}
	cout<<s;
    return 0;
}