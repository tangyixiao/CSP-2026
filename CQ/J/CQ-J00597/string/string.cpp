#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int num;
	int longs = 0;
	int ans = 0;
	cin >> num;
	string cn = "";
	for(int i = 1;i<=num;i++){
		int a;
		char c;
		cin >> a >> c;
		for(int i = 1;i<=a;i++){
			cn += c;
		}
		longs += a;
	}
	for(int i = 0;i<longs/2;i++){
		if(cn[i] != cn[longs-1-i]){
			ans++;
		}
	}
	cout << ans;
	return 0;
}
