#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200010],l,r,n;
char c[200010];
long long ans,l1,r1;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}l=1;r=n;
	while(l<r){
		if (a[l]-l1<a[r]-r1){
			if (c[l]!=c[r]){
				ans+=a[l]-l1;
			}r1+=a[l]-l1;
			l1=0;
			l++;
		}else{
			if (c[l]!=c[r]){
				ans+=a[r]-r1;
			}l1+=a[r]-r1;
			r1=0;
			r--;
		}
	}cout<<ans;
	return 0;
}

