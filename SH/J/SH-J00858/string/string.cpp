#include <bits/stdc++.h>
using namespace std;
int n,a[200005];
char c[200005];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	while(l<r){
		int maxl=max(a[l],a[r]);
		if(a[l]==a[r]){
			if(c[l]!=c[r]) ans+=maxl;
			l++;
			r--;
		}
		else{
			if(maxl==a[l]){
				if(c[l]!=c[r]){
					ans+=a[r];
				}
				a[l]-=a[r];
				r--;
			}
			else{
				if(c[l]!=c[r]){
					ans+=a[l];
				}
				a[r]-=a[l];
				l++;
			}
		}
	} 
	cout<<ans;
} 
