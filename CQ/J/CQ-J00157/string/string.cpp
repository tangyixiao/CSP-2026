#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+1;
void fast(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	return;
}
struct stu{
	ll nu;char b;
}a[N];
ll n,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	fast();
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].nu>>a[i].b;
	ll l=1,r=n;
	while(l<r){
		while(a[l].b==a[r].b&&a[l].nu>=a[r].nu){a[l].nu-=a[r].nu,r--;if(a[l].nu==0) l++;}
		while(a[l].b==a[r].b&&a[l].nu<a[r].nu){a[r].nu-=a[l].nu,l++;if(a[r].nu==0) r--;}
		while(a[l].nu>=a[r].nu&&a[l].b!=a[r].b){
			//cout<<ans<<" "<<a[l].nu<<" "<<a[r].nu<<" "<<a[l].b<<" "<<a[r].b<<"\n";
			a[l].nu-=a[r].nu,ans+=a[r].nu,r--;
			if(a[l].nu==0) l++;
		}
		while(a[l].nu<a[r].nu&&a[l].b!=a[r].b){
			//cout<<ans<<" "<<a[l].nu<<" "<<a[r].nu<<" "<<a[l].b<<" "<<a[r].b<<"\n";
			a[r].nu-=a[l].nu,ans+=a[l].nu,l++;
			if(a[r].nu==0) r--;
		}
	}
	cout<<ans;
	return 0;
}

