#include<bits/stdc++.h>
using namespace std;
long long n[200005],m,r,l,ans;
char c[200005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> m;
	for(int i=1;i<=m;i++){
		cin >> n[i] >> c[i];
	}
	r=m;
	l=1;
	for(;;){
		if(l==r){
			break;
		}
		if(n[l]>=n[r]){
			if(c[l]!=c[r]){
				ans+=n[r];
			}
			n[l]-=n[r];
			r--;
		}else{
			if(c[r]!=c[l]){
				ans+=n[l];
			}
			n[r]-=n[l];
			l++;
		}
	}
	cout << ans;
	return 0;
}