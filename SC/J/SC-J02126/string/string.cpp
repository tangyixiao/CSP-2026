#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int A=2e5+10;
ll n,ans,s,l,r,h,f=2,w;
ll a[A],b[A];
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c;
		b[i]=c-'a'+1;
		h+=a[i];
		h%=2;
	}
	l=1;
	r=1;
	while(l+r<n){
		if(f==2){
			if(b[l]!=b[n+1-r]){
				ans+=min(a[l],a[n+1-r]);
			}
			if(a[l]<a[n+1-r]){
				f=0;
				s=a[n+1-r]-a[l];
				l++;
			}else if(a[l]>a[n+1-r]){
				f=1;
				s=a[l]-a[n+1-r];
				r++;
			}else{
				f=2;s=0;
				l++;r++;
			}
		}else if(f==1){
			if(b[l]!=b[n+1-r]){
				ans+=min(s,a[n+1-r]);
			}
			if(s<a[n+1-r]){
				f=0;
				s=a[n+1-r]-s;
				l++;
			}else if(s>a[n+1-r]){
				f=1;
				s=s-a[n+1-r];
				r++;
			}else{
				f=2;s=0;
				l++;r++;
			}
		}else{
			if(b[l]!=s){
				ans+=min(a[l],s);
			}
			if(a[l]<s){
				f=0;
				s=s-a[l];
				l++;
			}else if(a[l]>s){
				f=1;
				s=a[l]-s;
				r++;
			}else{
				f=2;s=0;
				l++;r++;
			}
		}
	}
	if(f!=2){
		if(f==1){
			ans+=min(a[n+1-r],s);
		}else{
			ans+=min(a[l],s);
		}
	}else{
		if((l+r)==n)ans+=min(a[l],a[n+1-r]);
	}
	cout<<ans;
	return 0;
}