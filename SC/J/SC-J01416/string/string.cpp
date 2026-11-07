#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	freopen("string","r",stdin);
	freopen("string","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n,cnt = 0;
	cin >> n;
	string s;
	for (int i = 1;i <= n;i++){
		int l;
		char c;
		cin >> l >> c;
		while(l--){
			s += c;
		}
	}
	string rs = s;
	reverse(rs.begin(),rs.end());
	int l = s.size();
	for (int i = 0;i < l;i++){
		if(rs[i] != s[i]){
			cnt++;
		}
	}
	cout << cnt/2;
	return 0;
} 

