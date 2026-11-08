#include<bits/stdc++.h>
using namespace std;

int ans;
struct st{
	int a;
	string s;
}r, x;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> r.a >> r.s >> x.a >> x.s;
	if (r.a == x.a){
		ans += 1000;
			if (r.s[0] == x.s[0] && r.s[1] == x.s[1]){
				ans += 100;
				if ((r.s[2] == 'A' || r.s[2] == 'B' || r.s[2] == 'C' && x.s[2] == 'A'|| x.s[2]== 'B' || x.s[2]== 'C') || (r.s[2] == 'D' || r.s[2] == 'F' && x.s[2] == 'D' || x.s[2] == 'F')){
					ans += 10;
					if ((r.s[2] == 'A' && x.s[2] == 'B' || r.s[2] == 'B' && x.s[2] == 'C' || r.s[2] == 'D' && x.s[2] == 'F') || (r.s[2] == 'B' && x.s[2] == 'A' || r.s[2] == 'C' && x.s[2] == 'B' || r.s[2] == 'F' && x.s[2] == 'D')){
						ans += 1;
					}
				}
			}
	}
	if (ans == 0){
		cout << "0000";
	}else {
		cout << ans;
	}
	return 0;
}

