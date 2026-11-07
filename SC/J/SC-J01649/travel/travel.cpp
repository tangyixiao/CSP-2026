#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1, c2, s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	string cnt = "";
	if(c1 == c2) {
		cnt += '1';
	}
	else{
		cnt += '0';
	}
		
	if(cnt[0] == '1' && s1[0] == s2[0] && s1[1] == s2[1]) {
		cnt += '1';
	}else
		cnt += '0';
	if(cnt[1] == '1' && ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] > 'C' && s1[2] <= 'F' && s2[2] > 'C' && s2[2] <= 'F'))){
		cnt += '1';
	}else
		cnt += '0';
	int c = s1[2] + s2[2];
	if(cnt[2] == '1' && (c == 131 || c == 133 || c == 138)) {
		cnt += '1';
	}
	else{
		cnt += '0';
	}
	cout << cnt;
	return 0;
}