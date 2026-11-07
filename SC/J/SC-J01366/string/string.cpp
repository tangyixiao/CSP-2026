#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

const int N=2e5 + 5;
int a[N];
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n;
	cin >> n;
	for(int i=1;i <= n;i++){
		cin >> a[i] >> c[i];
	}
	int cnt=0;
	int lp=1,l=1,rp=n,r=1;
	while(lp <= rp){
		if(lp == rp){
			break;
		} else{
			int deal=min(a[lp] - l + 1,a[rp] - r + 1);
			if(c[lp] != c[rp]){
				cnt+=deal;
			}
			if(l + deal > a[lp]){
				lp++;
				l=1;
			} else{
				l+=deal;
			}
			if(r + deal > a[rp]){
				rp--;
				r=1;
			} else{
				r+=deal;
			}
		}
	}
	cout << cnt;
	return 0;
}