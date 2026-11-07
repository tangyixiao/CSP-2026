#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool r1 = ((s1[2] == 'D' || s1[2] == 'F') ? false : true),r2 = ((s2[2] == 'D' || s2[2] == 'F') ? false : true);
	if (c1 != c2) cout<<"0000";
	else{
		cout<<"1";
		if (s1[0] != s2[0] || s1[1] != s2[1]) cout<<"000";
		else{
			cout<<"1";
			if (r1 != r2) cout<<"00";
			else{
				cout<<"1";
				char d1 = s1[2],d2 = s2[2];
				if ((d1 == 'A' && d2 == 'B') || (d1 == 'B' && d2 == 'A') || (d1 == 'B' && d2 == 'C') || (d1 == 'C' && d2 == 'B') || (d1 == 'D' && d2 == 'F') || (d1 == 'F' && d2 == 'D')){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}
		}
	}
	return 0;
}