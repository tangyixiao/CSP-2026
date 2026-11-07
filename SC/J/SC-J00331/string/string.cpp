#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+5;
int n,ans;
int a[maxn],mid,len,now;
char c[maxn];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];len+=a[i];
	}
	int l=1,r=n;mid=len/2;
	while(l<=r){
		if(l==r||now>=mid){
			break;
		}
		if(a[l]>a[r]){
			if(c[l]!=c[r]) ans+=a[r];
			now+=a[r];
			a[l]-=a[r];r--;
		}
		else if(a[l]==a[r]){
			if(c[l]!=c[r]) ans+=a[r];
			now+=a[r];
			l++,r--;
		}
		else{//a[l]<a[r]
			if(c[l]!=c[r]) ans+=a[l];
			now+=a[l];
			a[r]-=a[l];l++;
		}
	}
	cout<<ans;
	return 0;
}