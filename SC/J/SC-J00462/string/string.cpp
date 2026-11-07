#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200005];
char t[200005];
int n,l=1,r,ans=0;
string s="";
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	r=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>t[i];
	}
	while(l<r){
		cout<<t[l]<<" "<<t[r]<<endl;
		if(a[l]>=a[r]){
			if(t[l]!=t[r]) ans+=a[r];
			a[l]-=a[r];
			a[r]=0;
			r--;
		}else{
			if(t[l]!=t[r]) ans+=a[l];
			a[l]=0;
			a[r]-=a[l];
			l++;
		}
	}
	cout<<ans;
	return 0;
}