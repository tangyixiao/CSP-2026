#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) {
		cout<<"1";
		if((s1[0]==s2[0])&&(s1[1]==s2[1])) {
			cout<<"1";
			if((('A'<=s1[2]&&s1[2]<='C')&&('A'<=s2[2]&&s2[2]<='C'))||(('D'<=s1[2]&&s1[2]<='F')&&('D'<=s2[2]&&s2[2]<='F'))) {
				cout<<"1";
				if((s1[2]+1==s2[2])||(s1[2]==s2[2]+1)) {
					cout<<"1";
				} else {
					cout<<"0";
					return 0;
				}
			} else {
				cout<<"00";
				return 0;
			}
		} else {
			cout<<"000";
			return 0;
		}
	} else {
		cout<<"0000";
		return 0;
	}
	return 0 ;
}
//freopen("travel.in","r",stdin);
//freopen("travel.out","w",stdout);
//feropen("travel.in","r",stdin);
//feropen("travel.out","w",stdout);
//freopen("treval.in","r",stdin);
//freopen("trevql.out","w",stdout);
//freopen("r","travel.in",stdin);
//freopen("w","travel.out",stdout);
//ru guo wo ru xuan le qing at wo(luogu:jianzongX(1441888)) 
//niu lai! 
//    __  _               _             __
//   / / | |          ___| |___        !  !
//  / /__| |____     |___   ___|       !  !
// /_____   ____|   __\_\| |/_/__      !  !
//  _____| |_____  |_____   _____|     !  ! 
// |_____   _____|    / /| |\ \         \/
//       | |         / / | | \ \       /  \
//       |_|        /_/  |_|  \_\      \__/
