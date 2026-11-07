#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);

	string cr,cx,sr,sx,ans = "";
	cin >> cr >> sr >> cx >> sx;
	if(cr == cx){
		ans += '1';
		if(sr[0] == sx[0] && sr[1] == sx[1]){
			ans += '1';
			if((sr[2] < 'D' && sx[2] < 'D') || (sr[2] >= 'D' && sx[2] >= 'D')){
				ans += '1';
				if(char(sr[2] + 1) == sx[2] || char(sr[2] - 1) == sx[2]){
					ans += '1';
				}else{
					ans += '0';
				}
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