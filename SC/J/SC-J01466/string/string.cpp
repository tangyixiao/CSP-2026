# include <bits/stdc++.h>

using namespace std;

const int N = 2 * 1e5+5;
int n;
struct aox{
	char c;
	int len;
}a[N];
signed main(){
	
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i].len >> a[i].c;
	}
	

	int l = 1,r = n;
	int llen = a[l].len;
	int rlen = a[r].len;
	int ans = 0;
	while(l <= r){
		if(a[l].c != a[r].c){
			ans += min(llen,rlen);
		}
		if(llen > rlen){
			llen = llen - rlen;
			if(llen <= 0){
				if(a[l+1].c == a[r].c) ans = ans + llen;
				llen = a[++l].len;
			}
			rlen = a[--r].len;
		}else if(llen == rlen){
			llen = a[++l].len;
			rlen = a[--r].len;
		}else{
			rlen = rlen - llen;
			if(llen <= 0){
				if(a[r-1].c == a[l].c) ans = ans + rlen;
				rlen = a[--r].len;
			}
			llen = a[++l].len;
		}
	}
	
	cout << ans;
	
	return 0;
} 