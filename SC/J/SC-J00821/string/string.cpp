#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
typedef long long int ll;
ll n,len,ans,l,r,xq,c;
struct zz{
	ll x;
	char c;
}a[N];
string s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].c;
		len+=a[i].x;
	}
	l=1,r=n;
	xq=len/2;
	while(l<=r && ans<=xq ){
		if(a[l].x>=a[r].x){
			if(a[l].c!=a[r].c){
				ans+=a[r].x;
				a[l].x-=a[r].x;
				r--;
			}else{
				a[l].x-=a[r].x;
				r--;
			}
		}else{
			if(a[l].c!=a[r].c){
				ans+=a[l].x;
				a[r].x-=a[l].x;
				l++;
			}else{
				a[r].x-=a[l].x;
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
}