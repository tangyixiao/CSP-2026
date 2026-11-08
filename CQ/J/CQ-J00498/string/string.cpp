/*
3
2 a
2 b
1 c
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
4
1 b
1 c
3 b
3 c
*/
#include<bits/stdc++.h>
using namespace std;
#define xiawolei ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define aodaita freopen("string.in","r",stdin);freopen("string.out","w",stdout);
#define enl '\n'
using ll=long long;
using ld=long double;
const ll o=2e5+5;
const ll oc=0x3f3f3f3f3f3f3f3f;
const ll mod=1e9+7;
const ld eps=0.0001;
struct node{
	ll num;
	char c;
}a[o];
ll n,ans;
int main(){
	xiawolei
	aodaita
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].c;
	}
	ll l=1,r=n;
	while(l<r){
		if(a[l].c==a[r].c){
			if(a[l].num<a[r].num){
				a[r].num-=a[l].num;
				l++;
//				cout<<ans<<" "<<a[l].num<<" "<<a[r].num<<" "<<l<<" "<<r<<enl;
			}
			else if(a[r].num<a[l].num){
				a[l].num-=a[r].num;
				r--;
			}
			else if(a[l].num==a[r].num){
				l++;
				r--;
			}
		}
		else{
			if(a[l].num<a[r].num){
				ans+=a[l].num;
				a[r].num-=a[l].num;
				l++;
//				cout<<ans<<" "<<a[l].num<<" "<<a[r].num<<" "<<l<<" "<<r<<enl;
			}
			else if(a[r].num<a[l].num){
				ans+=a[r].num;
				a[l].num-=a[r].num;
				r--;
//				cout<<ans<<" "<<a[l].num<<" "<<a[r].num<<" "<<l<<" "<<r<<enl;
			}
			else if(a[l].num==a[r].num){
				ans+=a[r].num;
				l++;
				r--;
//				cout<<ans<<" "<<a[l].num<<" "<<a[r].num<<" "<<l<<" "<<r<<enl;
			}
		}
	}
	cout<<ans;
	return 0;
}
