#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200005],cnt,ans,l,r;
string b[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	cnt=n;
	l=1;
	r=n;
	while(r-l+1>1){
		if(a[l]>a[r]){
			a[l]-=a[r];
			r--;
			ans+=(a[r+1])*(!(b[l]==b[r+1]));
			continue;
		}
		if(a[l]<a[r]){
			a[r]-=a[l];
			l++;
			ans+=(a[l-1])*(!(b[l-1]==b[r]));
			continue;
		}
		ans+=(a[l])*(!(b[l]==b[r]));
		l++;
		r--;
	}
	cout<<ans;
	return 0;
} 
