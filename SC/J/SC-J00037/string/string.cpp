#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
ll n,a[N],ans;
char b[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	ll l=1,r=n,le=a[1],re=a[n];
	while(l<r){
		if(b[l]==b[r]){
			if(le>re){
				le-=re;
				r--;
				re=a[r];
			}
			else if(le<re){
				re-=le;
				l++;
				le=a[l];
			}
			else{
				l++;r--;
				re=a[r];
				le=a[l];
			}
		}else{
			if(le>re){
				ans+=re;
				le-=re;
				r--;
				re=a[r];
			}
			else if(le<re){
				ans+=le;
				re-=le;
				l++;
				le=a[l];
			}
			else{
				ans+=le;
				l++;r--;
				re=a[r];
				le=a[l];
			}
		}
	}
	cout<<ans;
	return 0;
}