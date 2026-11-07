#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],l,r,ans,flg;
char c[200005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++)
		cin >> a[i] >> c[i];
	l=1,r=n;
	while(l<r){
		flg=(c[l]!=c[r]);
		if(a[l]==a[r]){
			if(flg) ans+=a[l];
			l++;r--;
		}else if(a[l]<a[r]){
			if(flg) ans+=a[l];
			a[r]-=a[l];
			l++;
		}else{
			if(flg) ans+=a[r];
			a[l]-=a[r];
			r--;
		}
	}
	cout << ans;
	return 0;
}
