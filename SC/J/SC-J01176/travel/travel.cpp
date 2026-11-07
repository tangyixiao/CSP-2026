#include <iostream>

using namespace std;
using ll = long long;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2){
		if (s2[0] == s1[0] && s2[1] == s1[1]){
			char x = s1[2],y = s2[2];
			if (x > y) swap(x,y);
			if (x <= 'C' && 'D' <= y){
				cout << "1100";
			} else {
				if (y - x <= 1) cout << "1111";
				else cout << "1110";
			}
		} else cout << "1000";
	} else cout << "0000";
	return 0;
}