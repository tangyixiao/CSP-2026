#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,ans;
int a[200005];
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int l=1,r=n;;){
		while(a[l]>a[r] && l<r){
			if(c[l]==c[r])a[l]-=a[r];
			else{
				a[l]-=a[r];
				ans+=a[r];
				a[r]=0;
			}
			r--;
		}
		a[r]-=a[l];
		if(c[l]!=c[r])ans+=a[l];
		a[l]=0;
		l++;
		if(l>=r)break;
	}
	cout<<ans;
	return 0;
}