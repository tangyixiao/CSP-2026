#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s=" ";
ll a[200010];
struct node{
	ll num;
	char c;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n;
	cin>>n;
	ll sum=0;
	for(ll i=1;i<=n;++i){
		char c;
		cin>>a[i]>>c;
		for(ll j=1;j<=a[i];++j){
			s+=c;
		}
		sum+=a[i];
	}
	ll l=1,r=sum,tmp=0;
	while(l<=r){
		if(s[l]!=s[r])tmp++;
		l++;
		r--;
	}
	cout<<tmp;
	return 0;
} 
