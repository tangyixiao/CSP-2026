#include<bits/stdc++.h>
using namespace std;
int c1,c2,s1,s2,ans[10];
char s[10],seata,seatb;
bool check(char x,char y){
	bool flagx,flagy;
	if(x == 'F' || x == 'D') flagx=1;
	else flagx=0;
	if(y == 'F' || y == 'D') flagy=1;
	return flagx == flagy;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1;
	cin >> s+1;
	seata = s[3];
	s1 = s1*10 + s[1]-'0';
	s1 = s1*10 + s[2]-'0';
	cin >> c2;
	cin >> s+1;
	seatb = s[3];
	s2 = s2*10 + s[1]-'0';
	s2 = s2*10 + s[2]-'0';
	if(c1 == c2){
		ans[1] = 1;
	}
	if(c1 == c2 && s1 == s2) ans[2] = 1;
	if(c1 == c2 && s1 == s2 && check(seata,seatb)) ans[3] = 1;
	if(c1 == c2 && s1 == s2 && check(seata,seatb) && (seata == seatb+1 || seata == seatb-1)) ans[4] = 1;
	for(int i=1;i<=4;i++) cout << ans[i];
	return 0;
} 
