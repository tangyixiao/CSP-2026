#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,a[200010],l[200010],r[200010],len = 0;
char c[200010];

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
		l[i] = len + 1;
		len += a[i];
		r[i] = len;
	}
	int lid = 1,rid = n,L = 1,R = len,ans = 0;
	while(L < R){
		while(r[lid] < L){
			lid++;
		}
		while(R < l[rid]){
			rid--;
		}
		if(lid == rid){
			break;
		}
		if(c[lid] == c[rid]){
			int minl = min(r[lid] - L,R - l[rid]) + 1;
			L += minl;
			R -= minl;
			while(r[lid] < L){
				lid++;
			}
			while(R < l[rid]){
				rid--;
			}
		}else{
			int minl = min(r[lid] - L,R - l[rid]) + 1;
			L += minl;
			R -= minl;
			ans += minl;
			while(r[lid] < L){
				lid++;
			}
			while(R < l[rid]){
				rid--;
			}
		}
	}
	cout << ans;
	return 0;
}

//样例全过！！！压力！！！ 
