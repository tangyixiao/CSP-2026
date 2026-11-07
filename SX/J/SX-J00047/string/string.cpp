#include<bits/stdc++.h>
#define int long long
using namespace std;
struct ssss{
	char zi;
	int cnt;
} h[200010];
signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int sum = 0;
	for(int i = 1; i <= n; i ++){
		int a;
		cin >> a;
		char b;
		cin >> b;
		h[i].zi = b;
		h[i].cnt = a;
		sum += a;
	}
	int ii = 1, jj = n;
	int sum1 = 0;
	for(int i = 1; i <= sum / 2; i ++){
  		if(ii != jj){
			if(h[ii].zi == h[jj].zi){
				int s = min(h[ii].cnt, h[jj].cnt);
				h[ii].cnt -= s;
				h[jj].cnt -= s;
			}else{
				int s = min(h[ii].cnt, h[jj].cnt);
				h[ii].cnt -= s;
				h[jj].cnt -= s;
				sum1 += s;
			}
			if(h[ii].cnt == 0){
				ii ++;
			}
			if(h[jj].cnt == 0){
				jj --;
			}
			if(ii > jj){
				break;
			}
			continue;
		}
	}
	cout << sum1;
	return 0;
}