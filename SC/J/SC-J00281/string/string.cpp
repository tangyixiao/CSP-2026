#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
string s[N];
long long n,a[N],ans;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
	}
	long long l=1,lnow,r=n,rnow;
	lnow=a[l],rnow=a[r];
	while(l<=r){
		if(s[l]==s[r]){
			if(lnow>rnow){
				lnow-=rnow;
				r--;
				rnow=a[r];
			}
			else if(lnow<rnow){
				rnow-=lnow;
				l++;
				lnow=a[l];
			}
			else r--,l++,lnow=a[l],rnow=a[r];
		}
		else{
			ans+=min(rnow,lnow);
			if(lnow>rnow){
				lnow-=rnow;
				r--;
				rnow=a[r];
			}
			else if(lnow<rnow){
				rnow-=lnow;
				l++;
				lnow=a[l];
			}
			else r--,l++,lnow=a[l],rnow=a[r];
		}
	}
	cout<<ans;
	return 0;
}
