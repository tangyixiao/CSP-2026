#include <iostream>
#include <cstdio>
using namespace std;
const int MAXN=200005;
int n,a[MAXN];
char c[MAXN];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	int l=1,r=n;
	while(l<r){
		if(a[l]<a[r]){
			if(c[l]!=c[r]) ans+=a[l];
			a[r]-=a[l];
			a[l]=0;
			l++;
		}else if(a[l]==a[r]){
			if(c[l]!=c[r]) ans+=a[l];
			a[l]=a[r]=0;
			l++;
			r--;
		}else{
			if(c[l]!=c[r]) ans+=a[r];
			a[l]-=a[r];
			a[r]=0;
			r--;
		}
	}cout<<ans;
	return 0;
}
