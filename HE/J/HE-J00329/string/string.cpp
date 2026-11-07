#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+50;

ll n,a[N],last,ans,sum,cnt,mid;
char c[N],now;
bool k;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	now=c[1];
	for(ll l=1,r=n;l<r;){
		if(a[l]<=0)l++;
		if(a[r]<=0)r--;
		if(a[l]>=a[r]){
			now=c[l];
			if(now!=c[r]){
				ans+=a[r];
			}
			a[l]-=a[r];
			r--;
		}else{
			now=c[r];
			if(now!=c[l]){
				ans+=a[l];
			}
			a[r]-=a[l];
			l++;
		}
	}
	cout<<ans<<endl;
	
	return 0;
}
