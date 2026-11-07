#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],ans;
char c[200010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	int l=1,r=n;
	while(l<=r){
		if(a[l]<=a[r]&&c[l]!=c[r]){
			ans+=a[l];
			a[r]-=a[l];
			l++;
		}else if(a[l]>a[r]&&c[l]!=c[r]){
			ans+=a[r];
			a[l]-=a[r];
			r--;
		}else if(a[l]<=a[r]&&c[l]==c[r]){
			a[r]-=a[l];
			l++;
		}else if(a[l]>a[r]&&c[l]==c[r]){
			a[l]-=a[r];
			r--;
		}
	}
	cout<<ans;
	return 0;
}