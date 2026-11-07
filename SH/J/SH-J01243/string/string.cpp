#include <iostream>
#include <string>
#define ll long long
using namespace std;

ll n, ans, sum;
string str;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i=0;i<n;i++) {
		ll a;
		string c;
		cin >> a >> c;
		for(int j=0;j<a;j++) str += c;
	}
	sum = str.length();
	for(int i=0;i<sum/2;i++) {
		if(str[i]!=str[sum-i-1]) ans++;
	}
	cout << ans;
}
