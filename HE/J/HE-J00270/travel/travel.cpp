#include <bits/stdc++.h>
#define int long long
using namespace std;
inline int check(char c){
	if (c=='A'||c=='B'||c=='C') return 1;
	else return 2;
}
signed main(void){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r1,r2,x1,x2;
	cin>>r1>>r2>>x1>>x2;
	if (r1==x1){//1...
		string s1="",s2="";
		s1=r2[0]+r2[1];
		s2=x2[0]+x2[1];
		if (s1==s2){//11..
			char p1=r2[2],p2=x2[2];
			if (check(p1)==check(p2)){//111.
				if (p1=='A'&&p2=='B') puts("1111");
				else if (p1=='B'&&p2=='A') puts("1111");
				else if (p1=='B'&&p2=='C') puts("1111");
				else if (p1=='C'&&p2=='B') puts("1111");
				else if (p1=='D'&&p2=='F') puts("1111");
				else if (p1=='F'&&p2=='D') puts("1111");
				else puts("1110");
			}
			else puts("1100");
		}
		else puts("1000");
	}
	else puts("0000");
	return 0;
}
