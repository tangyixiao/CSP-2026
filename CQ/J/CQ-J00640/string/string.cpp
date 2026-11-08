#include <bits/stdc++.h>
#define ll long long 
using namespace std;
const int N=2e5+5;
int n;
int a[N];
ll s[N],ans,kl,kr,le,rs;
char c[N];
string s1;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		s[i]=s[i-1]+a[i];
	}
//	if(s[n]<=200000){
		for(int i=1;i<=n;i++)
			for(int j=1;j<=a[i];j++)
				s1+=c[i];
		s1=" "+s1;
		for(int i=1;i<=s[n]/2;i++)
			if(s1[i]!=s1[s[n]-i+1])
				ans++;
		cout<<ans;
		return 0;
//	}
//	for(int i=1;i<=n;i++){
//		if(s[i]>s[n]/2) break;
//		le=i;
//	}
//	if(s[le]<s[n]/2){
//		for(int i=n;i>=le;i--){
//			swap(a[i],a[i+1]);
//			swap(c[i],c[i+1]);
//		}
//		le++;
//		a[le]=s[n]/2-s[le];
//		c[le]=c[le+1];
//		a[le+1]-=a[le];
//		n++;
//	}
//	rs=le+1;
//	for(int i=1;i<=n;i++) cout<<a[i]<<" "<<c[i]<<'\n';
//	cout<<le<<' '<<rs;
//	ll l=1,r=n,s[n];
//	while(l<r){
//		if(a[l]==a[r]){
//			if(c[l]!=c[r]) ans+=a[l];
//		}else if(a[l]>a[r]){
//			int o=a[l]-a[r];
//			if(a[r-1]<o) p=a[r-1];
//			else p=o;
//			a[r-1]-=o;
//			p=max(0,p);
//			if(c[l]==c[r]){
//				if(c[l]==c[r-1]) ans+=o-p;
//				else ans+=o;
//			}else{
//				if(c[l]==c[r-1]) ans+=a[l]-p;
//				else ans+=a[l];
//			}
//		}else{
//			int o=a[r]-a[l];
//			if(a[l+1]<o) p=a[l+1];
//			else p=o;
//			a[l+1]-=o;
//			p=max(0,p);
//			if(c[l]==c[r]){
//				if(c[l+1]==c[r]) ans+=o-p;
//				else ans+=o;
//			}else{
//				if(c[l+1]==c[r]) ans+=a[r]-p;
//				else ans+=a[r];
//			}
//		}
//		l++;
//		r--;
//	}
	return 0;
}
