#include<bits/stdc++.h>
using namespace std;
int n;
long long ans,k;
long long a[200005];
char c[200005];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int x=1,y=n,k=n;
	while(k>1){
		if(c[x]!=c[y]){
			int mn=min(a[x],a[y]);
			ans+=mn;
			a[x]-=mn;
			a[y]-=mn;
		} else {
			int mn=min(a[x],a[y]);
			a[x]-=mn;
			a[y]-=mn;
		}
		if(a[x]==0){
			x++;
			k--;
		}
		if(a[y]==0){
			y--;
			k--;
		}
	}
	cout<<ans;
	return 0;
}
