#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 40;
long long n,a[maxn];
char c[maxn];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;++i) cin>>a[i]>>c[i];
	long long l=1,r=n,ans=0;
	while(l<=r){
		if(c[l]!=c[r]){
			if(a[l]<=a[r]){
				ans+=a[l];
				a[r]-=a[l];
				a[l]=0;
				l++;
			}else{
				ans+=a[r];
				a[l]-=a[r];
				a[r]=0;
				r--;
			}
		}else{
			if(a[l]<=a[r]){
				a[r]-=a[l];
				a[l]=0;
				l++;
			}else{
				a[l]-=a[r];
				a[r]=0;
				r--;
			}
		}
	}
	cout<<ans<<'\n';
}
