#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200005];
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	ll r=n,ans=0,l=1;
	while(l<r){
		if(a[l]<=a[r]){
			a[r]-=a[l];
			if(b[l]!=b[r]) ans+=a[l];
			a[l]=0; 
		}
		if(a[l]>=a[r]){
			a[l]-=a[r];
			if(b[l]!=b[r]) ans+=a[r];
			a[r]=0;
		}
		if(!a[r]) r--;
		if(!a[l]) l++;
	}
	cout<<ans;
}
