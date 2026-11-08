#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
void fast(){
	 ios::sync_with_stdio(0);
	 cin.tie(0),cout.tie(0);
	 return ;
}
struct s{
	ll x;
	char y;
}a[N];

signed main(){
	fast();
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].y;
	}
	ll l=1,r=n,ans=0;
	while(l<=r){
		if(a[l].y==a[r].y){
			if(a[l].x==a[r].x){
				l++,r--;continue;
			}
			if(a[l].x>a[r].x){
			
				a[l].x=a[l].x-a[r].x;
				r--;
			}else{
			
				a[r].x=a[r].x-a[l].x;
				l++;
			}
		}
		else{
			if(a[l].x==a[r].x){
				ans+=a[l].x;
				l++,r--;
			}
			else if(a[l].x>a[r].x){
				ans+=min(a[r].x,a[l].x);
				a[l].x=a[l].x-a[r].x;
				r--;
			}else{
				ans+=min(a[r].x,a[l].x);
				a[r].x=a[r].x-a[l].x;
				l++;
			}
		}
		
	}cout<<ans;
	return 0;
}


