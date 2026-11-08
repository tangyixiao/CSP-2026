#include<bits/stdc++.h>
using namespace std;
string ans;
char b1[500] = {'D','F','B','A','B'};
bool where(char pi){
	return !(pi=='F'||pi=='D');
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	b1['A'] = 'B';
	b1['B'] = 'C';
	b1['C'] = 'B';
	b1['D'] = 'F';
	b1['F'] = 'D';
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		ans = ans +'1';
		if(s1.substr(0,2) == s2.substr(0,2)){
			ans = ans+'1';
			char d1 = s1[2];
			char d2 = s2[2];
			if(where(d1)==where(d2)){
				ans+='1';
				if(b1[d1]==d2||b1[d2]==d1){
					ans ="1111";
				}
				else ans = "1110";
			}
			else ans = "1100";
		}
		else ans = "1000";
	}
	else ans = "0000";
	cout << ans << endl;
	return 0;
}
/*
02 01A 02 01B
02 01C 02 01D
*/
