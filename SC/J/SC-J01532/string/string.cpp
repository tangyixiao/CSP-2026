#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+5;
int n,a[maxn],l=1,r,sum,ans;
char c[maxn];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	r=n;
	while(l<=r){
		sum+=a[r];
		if(a[l]>sum){
			if(c[l]!=c[r]) ans+=a[r];
			r--;
		} 
		else if(a[l]<sum){
			int x=sum-a[l];
			if(c[r]!=c[l]) ans+=a[r]-x;
			a[r]=x;
			l++;
			sum=0;
		}
		else{
			if(c[l]!=c[r]) ans+=a[r];
			l++;
			r--;
			sum=0;
		}
	}
	cout<<ans;
	return 0;
}