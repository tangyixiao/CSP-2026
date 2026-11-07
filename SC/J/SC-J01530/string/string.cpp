#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,ans=0;
char b[200005];
int a[200005];
int l=1,r;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	r=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	while(l<r){
		if(a[l]<a[r]){
			if(b[l]!=b[r]){
				ans+=a[l];
				a[r]-=a[l];
				l++;
			}
			else{
				a[r]-=a[l];
				l++;
			}
		}
		else if(a[l]==a[r]){
			if(b[l]!=b[r]){
				ans+=a[l];
				l++;
				r--;
			}
			else{
				l++;
				r--;
			}
		}
		else{
			if(b[l]!=b[r]){
				ans+=a[r];
				a[l]-=a[r];
				r--;
			}
			else{
				a[l]-=a[r];
				r--;
			}
		}
	}
	cout<<ans;
	return 0;
}