#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
ll n,a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	ll ans=0;
	ll x=1,y=n;
	ll mid=(x+y)>>2;
	while(x<y){
		if(c[x]!=c[y]){
			if(a[x]>a[y]){
				ans+=a[y];
				a[x]-=a[y];
				y--;
			}else if(a[x]<a[y]){
				ans+=a[x];
				a[y]-=a[x];
				x++;
			}else{
				ans+=a[x];
				x++,y--;
			}
		}
		else{
			if(a[x]>a[y]){
				a[x]-=a[y];
				y--;
			}else if(a[x]<a[y]){
				a[y]-=a[x];
				x++;
			}else{
				x++,y--;
			}
		}
	}
	cout<<ans;
	return 0; 
} 

