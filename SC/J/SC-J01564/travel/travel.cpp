#include <bits/stdc++.h>
using namespace std;
#define int long long
string c1,s1,c2,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2){
		cout << "0000\n";
		return 0;
	}
	if ((s1[0] != s2[0]) || (s1[1] != s2[1])){
		cout << "1000\n";
		return 0;
	}
	int cnt1 = 0,cnt2 = 0;
	if (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C'){
		cnt1 = 1;
	}else{
		cnt1 = 2;
	}
	if (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C'){
		cnt2 = 1;
	}else{
		cnt2 = 2;
	}
	if (cnt1 != cnt2){
		cout << "1100\n";
		return 0;
	}
	cnt1 = s1[2] - 'A';
	cnt2 = s2[2] - 'A';
	if (cnt1 + 1 == cnt2 || cnt2 + 1 == cnt1){
		cout << "1111\n";
	}else if ((cnt1 == 3 && cnt2 == 5) || (cnt1 == 5 && cnt2 == 3)){
		cout << "1111\n";
	}else{
		cout << "1110\n";
	}
	return 0;
}
/*
13 13D 13 13C
*/