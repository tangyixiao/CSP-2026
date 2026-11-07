#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin>>n;
	string s;
	ll len=0;
	for(ll i=0;i<n;i++){
		ll xx;
		cin>>xx;
		char cc;
		cin>>cc;
		for(ll j=0;j<xx;j++){
			s[len+j]=cc;
		}
		len+=xx;
	}
	ll l=0;
	ll r=len;
	int sum=0;
	while(l<r){
		if(s[l]!=s[r-1]) sum++;
		l++;
		r--;
	}
	cout<<sum;
	return 0;
}