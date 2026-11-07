#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,a[200005];
char ch[200005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i]>>ch[i];
	ll l=0,r=n-1,ans=0;
	while(l<=r){
		if(a[l]<a[r]){
			a[r]-=a[l];
			if(ch[l]!=ch[r]) ans+=a[l];
			l++;
		}
		else if(a[l]>a[r]){
			a[l]-=a[r];
			if(ch[l]!=ch[r]) ans+=a[r]; 
			r--;
		}
		else{
			if(ch[l]!=ch[r]) ans+=a[l];
			l++;
			r--;
		}
	}
	cout<<ans;
	return 0;
}