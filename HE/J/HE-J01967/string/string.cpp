#include<iostream>
using namespace  std;
long long a[200005];
int n;
long long ans=0;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int l,r;
	l=0;
	r=n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	while(l<=r){
		int t=min(a[l],a[r]);
		if(c[l]!=c[r]) ans+=t;
		if(t==a[l] && t!=a[r]){
			l++;
			a[r]-=t;
		}
		else if(t!=a[l] && t==a[r]){
			r--;
			a[l]-=t;
		}
		else{
			l++;
			r--;
		}
	}
	cout<<ans;
	return 0;
}
