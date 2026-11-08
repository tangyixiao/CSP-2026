#include<bits/stdc++.h>
using namespace std;
int n,l,r,a[200005];
char c[200005];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n,l=1,r=n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	while(l<=r){
		if(a[l]<=a[r]){
			if(c[l]!=c[r]) ans=ans+(long long)a[l];
			a[r]-=a[l],l++;
		}else{
			if(c[l]!=c[r]) ans=ans+(long long)a[r];
			a[l]-=a[r],r--;
		}
	}
	cout<<ans;
	return 0;
}
