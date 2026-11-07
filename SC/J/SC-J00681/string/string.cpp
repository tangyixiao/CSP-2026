#include <bits/stdc++.h>
using namespace std;
long long n,l,r,cnt;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	for(int i = 1; i <= n;i++){
		long long t;
		string tt;
		cin >> t >> tt;
		for(int i = 1; i <= t;i++)   s += tt;
	}
	
	if(s.size() % 2 == 0){
		l = s.size() / 2 - 1;
		r = l + 1;
	}
	else{
		l = s.size() / 2 - 1;
		r = l + 2;
	}
	int k = l;
	for(int i = 1; i <= k+1;i++){
		if(s[l] != s[r])  cnt++;
		l--;
		r++;
	}
	cout << cnt;
	return 0;
}