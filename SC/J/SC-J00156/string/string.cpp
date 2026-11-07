#include<bits/stdc++.h>
#define int long long
const int N=2e5+10;
using namespace std;
int n;
int a[N],s[N];
char c[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i]>>c[i];
		s[i]=s[i-1]+a[i];
	}
	int S=s[n];
	int l=1,r=n,ans=0;
	while(s[l]<=S/2&r>=l){
		if(c[l]==c[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];
				a[r]=0;
				--r;
			}
			else if(a[l]<a[r]){
				a[r]-=a[l];
				a[l]=0;
				++l;
			}
			else{
				a[r]=0;a[l]=0;
				++l;--r;
			}
		}
		else{
			if(a[l]>a[r]){
				ans+=a[r];
				a[l]-=a[r];
				a[r]=0;
				--r;
			}
			else if(a[r]>a[l]){
				ans+=a[l];
				a[r]-=a[l];
				a[l]=0;
				++l;
			}
			else{
				ans+=a[l];
				a[l]=0;a[r]=0;
				++l;--r;
			}
		}
	}
	/*cout<<l<<' '<<r<<'\n';
	for(int i=1;i<=n;++i)if(a[i]!=0)cout<<a[i]<<' '<<i<<' ';
	cout<<'\n';*/
	if(a[l]>a[r]&&c[l]!=c[r])ans+=a[r];
	else if(a[l]==a[r]&&c[l]!=c[r])ans+=a[l];
	else if(a[l]<a[r]&&c[l]!=c[r])ans+=a[r];
	cout<<ans;
	return 0;
} 