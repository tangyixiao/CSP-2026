#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool flg=true;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	flg&=(c1==c2);
	cout << flg;
	flg&=(s1[0]==s2[0]&&s1[1]==s2[1]);
	cout << flg;
	flg&=((s1[2]<'D'&&s2[2]<'D')||(s1[2]>'C'&&s2[2]>'C')?1:0);
	cout << flg;
	if(s1[2]=='A'&&s2[2]=='B') cout << flg;
	else if(s1[2]=='B'&&s2[2]=='A') cout << flg;
	else if(s1[2]=='C'&&s2[2]=='B') cout << flg;
	else if(s1[2]=='B'&&s2[2]=='C') cout << flg;
	else if(s1[2]=='D'&&s2[2]=='F') cout << flg;
	else if(s1[2]=='F'&&s2[2]=='D') cout << flg;
	else cout << 0;
	return 0;
}
