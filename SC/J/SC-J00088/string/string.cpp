#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
bool w=0;
string s;
ll a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin); 
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		a[i]+=a[i-1];
	}
	ll ans=0;
	ll l=1,r=a[n];
	ll i=1,j=n;
	while(l<=r){
		while(l>a[i]){
			if(l>a[i]) i++;
		}
		while(r<a[j-1]){
			if(r<a[j-1]) j--;
		}
		ll num=min(a[i]-l+1,r-a[j-1]);
		if(c[i]!=c[j]){
			ans+=num; 
		}
		if(num==a[i]-l+1) i++;
		if(num==r-a[j-1]) j--;
		l+=num;r-=num;
	}
	cout<<ans;
	return 0;	
}
