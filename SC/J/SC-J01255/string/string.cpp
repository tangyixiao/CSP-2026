#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int a[N];
char c[N];
signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, len=0;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
		len+=a[i];
	}
	int ll=1, rr=n, ans=0;
	while(ll<rr){
		int cntl=a[ll], cntr=a[rr];
		if(cntl>cntr){
			if(c[ll]!=c[rr]){
				ans+=cntr;
				rr--;
				a[ll]-=cntr;
			}else{
				rr--;
				a[ll]-=cntr;
			}
		}else if(cntl==cntr){
			if(c[ll]!=c[rr]){
				ans+=cntl;
				ll++;
				rr--;
			}else{
				ll++;
				rr--;
			}
		}else{
			if(c[ll]!=c[rr]){
				ans+=cntl;
				ll++;
				a[rr]-=cntl;
			}else{
				ll++;
				a[rr]-=cntl;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}