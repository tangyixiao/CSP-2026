#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin >> a >> b >> c >> d;
	string ans;
	if(a == c){
		int n,m;
		n = (b[0]-'0') * 10 + (b[1]-'0');
		m = (d[0]-'0') * 10 + (d[1]-'0');
		if(n == m){
			if(((b[2] >= 'A' && b[2] <= 'C') && (d[2] >= 'A' && d[2] <= 'C'))){
				if((b[2] == 'A' && d[2] == 'B') || (b[2] == 'B' && d[2] == 'A') || (b[2] == 'B' && d[2] == 'C') || (b[2] == 'C' && d[2] == 'B')){
					ans = "1111";
				}
				else{
					ans = "1110";
				}
			}
			else if(((b[2] == 'D' && d[2] == 'F') && (b[2] == 'F' && d[2] == 'D'))){
				ans = "1111";
			}
			else{
				ans = "1100";
			}
		}
		else{
			ans = "1000";
		}
	}
	else{
		ans = "0000";
	}
	cout << ans;
	return 0; 
}
