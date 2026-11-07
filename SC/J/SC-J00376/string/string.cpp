#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+5;
ll n,a[N],sum,ans;
char b[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		sum+=a[i];
	}
	ll l=1,r=sum,i=1,j=n;
	while(l<r){
		if(a[i]>a[j]){
			if(b[i]!=b[j]){
				ans+=a[j];
			}
			r-=a[j];
			a[i]-=a[j];
			l+=a[j];
			j--;
		}else{
			if(b[i]!=b[j]){
				ans+=a[i];
			}
			r-=a[i];
			a[j]-=a[i];
			l+=a[i];
			i++;
		}
	}
	cout<<ans;
	return 0;
}