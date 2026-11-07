#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5;
ll n;
struct piece{
	int x;
	char c;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i].x>>a[i].c;
	}
	ll cnt=0,l=1,r=n;
	while(l<=r){
		ll t=a[l].x-a[r].x;
		if(a[l].c==a[r].c){	
			if(t>0){
				a[l].x=t;
				r-=1;
			}else if(t<0){
				a[r].x=abs(t);
				l+=1;
			}else{
				r-=1;
				l+=1;
			}
		}else{
			cnt+=min(a[l].x,a[r].x);
			if(t>0){
				a[l].x=t;
				r-=1;
			}else if(t<0){
				a[r].x=abs(t);
				l+=1;
			}else{
				r-=1;
				l+=1;
			}
		}
	}
	cout<<cnt;
	

	return 0;
}

