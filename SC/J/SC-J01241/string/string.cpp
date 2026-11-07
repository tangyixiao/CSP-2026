#include<bits/stdc++.h>
#define int int
using namespace std;
const int N = 2e5+5;
int n, a[N];
long long ans;
char c[N];
int ls, rs, la, ra;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1; i <= n; i++)
		cin>>a[i]>>c[i];
	ls = 1, rs = n, la = a[1], ra = a[n];
	while(ls <= n && rs >= 0){
		if(la == ra){
			if(c[ls] != c[rs])
				ans += ra;
			rs--;
			ra = a[rs];
			ls++;
			la = a[ls];
		} 
		else if(la > ra){
			if(c[ls] != c[rs])
				ans += ra;
			rs--;
			la -= ra;
			ra = a[rs];
		}
		else{
			if(c[ls] != c[rs])
				ans += la;
			ls++;
			ra -= la;
			la = a[ls];
		}
	}
	if(ans/2*2 != ans) ans++;
	cout<<ans/2;
	return 0;
}  