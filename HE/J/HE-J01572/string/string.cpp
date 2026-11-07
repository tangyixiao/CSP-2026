#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
void check(string s){
	ll l = s.size();
	ll sum = 0;
	for(ll i = 0; i < l / 2; i++){
		ll r = l - i - 1;
		if(s[i] != s[r]) sum += 1;
	}
	cout << sum << endl;
}
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	string s;
	cin >> n;
	for(int i = 0; i < n; i++){
		ll a;
		char c;
		cin >> a >> c;
		while(a--){
			s += c;
		}
	}
	check(s);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
//Trick||Treat!
