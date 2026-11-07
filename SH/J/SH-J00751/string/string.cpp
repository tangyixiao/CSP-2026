#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
char c[N];
int a[N],n,ans=0,l,r;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;l=1;r=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	while(l<r){
//		cout<<l<<' '<<r<<endl;
		if(c[l]!=c[r]){
			if(a[l]>a[r]){
				ans+=a[r];
				a[l]-=a[r];
				if(a[l]==0) l++;
				r--;
			}else{
				ans+=a[l];
				a[r]-=a[l];
				l++;
				if(a[r]==0) r--;
			}
		}else{
			if(a[l]>a[r]){
				a[l]-=a[r];
				if(a[l]==0) l++;
				r--;
			}else{
				a[r]-=a[l];
				l++;
				if(a[r]==0) r--;
			}
		}
	}
	cout<<ans;
	return 0;
}
