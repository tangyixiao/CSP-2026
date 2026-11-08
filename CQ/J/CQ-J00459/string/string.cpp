#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+5;
int n, a[maxn], sum, ans;
int L, R, nl, nr;
char c[maxn];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	L=1;
	R=n;
	nl=a[1];
	nr=a[n];
	while(L<R){
		if(nl==nr){
			if(c[L]!=c[R]){
				ans+=nl;
			}
			L++;
			R--;
			nl=a[L];
			nr=a[R];
		}else if(nl<nr){
			if(c[L]!=c[R]){
				ans+=nl;
			}
			nr-=nl;
			L++;
			nl=a[L];
		}else{
			if(c[L]!=c[R]){
				ans+=nr;
			}
			nl-=nr;
			R--;
			nr=a[R];
		}
	}
	cout<<ans;
	return 0;
}
/*
T:O(n)
M:2352 KB
*/
