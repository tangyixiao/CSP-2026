#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
const int N=200010;
ll a[N];
vector<char> s;
ll sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>a[i];
		char r;
		cin>>r;
		s.push_back(r);
		sum+=a[i];
	}
	ll l=0,r=n,mid=sum/2,k=sum%2,cnt=0;
	while(l<r){
		ll x=max(a[l],a[r]);
		ll y=min(a[l],a[r]);
		ll rest;
		if(s[l]!=s[r]){
			cnt+=y;
			rest=x-y;
			if(a[l]>a[r]){
				r--;
				a[l]=rest;
			}
			else if(a[l]<a[r]){
				l++;
				a[r]=rest;
			}
			else{
				r--;l++;
			}
		}
		else{
			r--;l++;
		}
	}
	cout<<cnt;
	return 0;
}
