#include<bits/stdc++.h>
#include <string>
using namespace std;
int main(){
	//freopen("travel.in ","r",stdin)
	//freopen("travel.out ","w",stdout)
	string c1; cin >> c1;
	string c2; cin >> c2;
	string s1; cin >> s1;
	string s2; cin >> s2;
	int r,x;
	cin >> r >> x;
	char A,B,C,D,E;
	cin >> A >> B >> C >> D >> E;
	if(c1 == c2){
		cout << 1;
		if(s2[x] = s1[r]){
			cout << 1;
		}
	}
	return 0;
}
