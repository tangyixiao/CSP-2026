#include <bits/stdc++.h>
using namespace std;
string cr, sr;
string cx, sx;
string ans = "";
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> cr >> sr >> cx >> sx;
	if(cr == cx){
		ans += "1";
		if(sr[0] == sx[0] && sr[1] == sx[1]){
			ans += "1";
			char r = sr[2];
			char x = sx[2];
			if('A' <= r && r <= 'C' && 'A' <= x && x <= 'C'){
				ans += "1";
				if((r - x == 1) || (r - x == -1)){
					ans += "1";
				}else{
					ans += "0";
				}
			}else if('D' <= r && r <= 'F' && 'D' <= x && x <= 'F'){
				ans += "11"; 
			}else{
				ans += "00";
			}
		}else{
			ans += "000";
		}
	}else{
		ans += "0000";
	}
	cout << ans;
	return 0;
}