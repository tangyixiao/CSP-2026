#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,a[N];
long long ans;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	while(l<r){
		if(l<r){
			while(r>l&&a[l]-a[r]>=0){
				if(c[l]!=c[r]) ans+=a[r];
				a[l]-=a[r],r--;
			}
			if(c[l]!=c[r]) ans+=a[l];
			a[r]-=a[l];
			if(l==r) break;
		}
		l++;
	} 
	cout<<ans;
	return 0;
}
