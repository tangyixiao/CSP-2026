#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,len,a[200009];
char c[200009];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	if(len<=1e6){
		string s;
		for(ll i=1;i<=n;i++)
			for(ll j=1;j<=a[i];j++)
				s+=c[i];
		s=" "+s;
		ll ans=0;
		for(ll i=1,j=len;i<=j;i++,j--)
			if(s[i]!=s[j])
				ans++;
		cout<<ans;
	}else{
		ll i=1,j=n,l=1,r=len,ans=0;
		while(l<=r&&i<=j){
			if(a[i]>a[j]){
				if(c[i]!=c[j])
					ans+=a[j];
				l+=a[j],r-=a[j];
				a[i]-=a[j],j--;
			}else if(a[i]==a[j]){
				if(c[i]!=c[j])
					ans+=a[j];
				l+=a[j],r-=a[j];
				i++,j--;
			}else{
				if(c[i]!=c[j])
					ans+=a[i];
				l+=a[i],r-=a[i];
				a[j]-=a[i],i++;
			}
		}
		cout<<ans;
	}
	return 0;
}
