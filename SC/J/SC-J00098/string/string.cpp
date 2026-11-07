#include<bits/stdc++.h>
using namespace std;
#define int long long
int n, a, all, ans;
string k = "#";
char c;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a >> c;
		all += a;
		for(int j = 1;j <= a;j++){
			k += c;
		}
	}
	for(int i = 1;i <= all / 2;i++){
		if(k[i] != k[all + 1 - i]){
			++ans;
		}
	}
	cout << ans;

	return 0;
}