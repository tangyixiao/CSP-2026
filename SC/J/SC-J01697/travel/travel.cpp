#include<bits/stdc++.h>
using namespace std;
int c, cc;
string s, ss;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c >> s >> cc >> ss;
	if(c == cc){
		cout << "1";
	}else{
		cout << "0000";
		return 0;
	}
	if(s[0] == ss[0] && s[1] == ss[1]){
		cout << "1";
	}else{
		cout << "000";
		return 0;
	}
	if((s[2] <= 'C' && ss[2] <= 'C') || (s[2] >= 'D' && ss[2] >= 'D')){
		cout << "1";
	}else{
		cout << "00";
		return 0;
	}
	if(s[2] + 1 == ss[2] || s[2] == ss[2] + 1){
		cout << "1";
	}else{
		cout << "0";
	}
	return 0;
}