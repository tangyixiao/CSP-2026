#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define N 200005
ll n,len;
ll a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	ll ans=0;
	ll l=0,r=len+1,i=1,j=n;
	while(i<=j){
		if(l+a[i]<=len-r+1+a[j]){
			if(c[i]!=c[j]){
				if(l+a[i]>=len-r+1) ans+=l+a[i]-max(l,len-r+1);
			}
			l+=a[i];
			i++;
		}
		else{
			if(c[i]!=c[j]){
				if(len-r+1+a[j]>=l) ans+=len-r+1+a[j]-max(len-r+1,l);
			}
			r-=a[j];
			j--;		
		}
	}
	cout<<ans;
	return 0;
}
//long long
