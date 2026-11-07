#include<bits/stdc++.h>
#define ll long long
#define up(i,a,b,c) for(ll i=a;i<=b;i+=c)
#define dn(i,a,b,c) for(ll i=a;i>=b;i-=c)

using namespace std;
ll n;
ll a[200005];
char c[200005];
ll ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	up(i,1,n,1){
		cin>>a[i]>>c[i];
	}
	for(ll i=1,j=n;i<j;){
		if(c[i]==c[j]){
			if(a[i]<a[j]){
				a[j]-=a[i];
				i++;
			}
			else if(a[i]==a[j]){
				i++;
				j--;
			}
			else{
				a[i]-=a[j];
				j--;
			}
		}
		else{
			if(a[i]<a[j]){
				a[j]-=a[i];
				ans+=a[i];
				i++;
			}
			else if(a[i]==a[j]){
				ans+=a[i];
				i++;
				j--;
			}
			else{
				a[i]-=a[j];
				ans+=a[j];
				j--;
			}				
		}
	}
	cout<<ans<<endl;
	return 0;
}
