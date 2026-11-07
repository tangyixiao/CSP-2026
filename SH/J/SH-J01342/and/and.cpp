#include<bits/stdc++.h>
#define int long long
using namespace std;
int n , m;
int a[200010];
int ans;
int qpow(int a){
	int res = 1;
	int x = 2;
	while(a){
		if(a % 2)res *= x;
		x *= x;
		a /= 2;
	}
	return res;
}
signed main(){
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++)cin >> a[i];
	int check = 30;
	vector<int> up;
	for(int i = 1 ; i <= n ; i++)up.push_back(i);
	while(check >= 1){
		vector<int> ve[40];
		for(int i = 0 ; i < up.size() ; i++){
			int x = a[up[i]];
			string s;
			while(x){
				s += (x % 2) + '0';
				x /= 2;
			}
			for(int j = 0 ; j < s.size() ; j++){
				if(s[j] == '1')ve[j + 1].push_back(up[i]);
			}
		}
		up.clear();
		while(check-- >= 1){
			if(ve[check].size() >= m){
				ans += qpow(check - 1);
				for(int k = 0 ; k < ve[check].size() ; k++)up.push_back(ve[check][k]);
				break;
			}
		}
	}
	cout << ans;
	return 0;
}
