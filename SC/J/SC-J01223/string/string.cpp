#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans;
struct p {
	int siz;
	char z;
} a[200005];
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i = 1; i <= n; i++) {
		cin>>a[i].siz>>a[i].z;
	}
	int p = n,i = 1;
	while(p > i){
		if(a[i].siz == a[p].siz&&a[i].z == a[p].z) {
			p--;
			i++;
		}
		if(a[i].siz == a[p].siz&&a[i].z != a[p].z) {
			ans += a[i].siz;
			p--;
			i++;
		}
		if(a[i].siz > a[p].siz){
			if(a[i].z != a[p].z){
				ans += a[p].siz;
				p--;
				a[i].siz -= a[p].siz;
			}
			else{
				a[i].siz -= a[p].siz;
				p--;
			}
		}
		if(a[i].siz < a[p].siz) {
			if(a[i].z != a[p].z) {
				ans += a[i].siz;
				a[p].siz -= a[i].siz;
				i++;
			}
			else{
				a[p].siz -= a[i].siz;
				i++;
			}
		}
	}
	cout<<ans;
	return 0;
}