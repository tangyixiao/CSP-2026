#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 5;
int n,len,ans;
int a[N];char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
		len += a[i];
	}
	int l = 1,r = len;
	int lpos = 1,rpos = n;
	while(lpos < rpos){
		if(c[lpos] != c[rpos]){
			ans += min(a[lpos],a[rpos]);
		}
		if(a[lpos] < a[rpos]){
			a[rpos] -= a[lpos];lpos++;
		}else if(a[lpos] > a[rpos]){
			a[lpos] -= a[rpos];rpos--;
		}else{
			lpos++;rpos--;
		}
		
	}
	cout << ans;
	return 0;
}

