#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,m; 
int a[N];
char c[N];
int l,r;
signed main(){
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	l=1,r=n;
	int ans=0; 
	while(l<r){
		if(c[l]!=c[r]){
			if(a[l]<a[r]){
				ans+=a[l];
				a[r]-=a[l];
				l++;
			}else if(a[l]>a[r]){
				ans+=a[r];
				a[l]-=a[r];
				r--;
			}else{
				ans+=a[l];
				l++;
				r--;
			}
		}else{
			if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}else if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}else{
				l++;
				r--;
			}
		}
	}
	cout<<ans;
}
