#include<iostream>
#include<string>
#include<cmath>
using namespace std;
string s[5];
string ans;
bool f = 1;
bool ok(char n){
	if(n == 'A' || n == 'B' || n == 'C') return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=4;++i)
		cin >> s[i];
	if(s[1] == s[3]) ans += "1";
	else{
		ans += "0000";
		cout << ans;
		return 0;
	}
	for(int i=0;i<=1;++i)
		if(s[2][i] != s[4][i]) f = 0;
	if(f == 1) ans += "1";
	else{
		ans += "000";
		cout << ans;
		return 0;
	}
	char n = s[2][2];
	char m = s[4][2];
	if(ok(n) == ok(m)){
		ans += "1";
		if(abs(int(n) - int(m)) == 1) ans += "1";
		else ans += "0";
	}else ans += "00";
	cout << ans;
	return 0;
} 