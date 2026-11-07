#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1 = "",c2 = "",s1 = "",s2 = "";
	cin>>c1>>c2>>s1>>s2;
	char j1 = c2[2];
	char j2 = s2[2];
	bool b1 = 0;
	bool b2 = 0;
	if(c1 == s1){
		cout<<"1";
		if(c2[0] == s2[0] && c2[1] == s2[1]){
			cout<<"1";
			if(j1 == 'A' || j1 == 'B' || j1 == 'C'){
				b1 = 1;
			}
			else{
				b1 = 0;
			}
			if(j2 == 'A' || j2 == 'B' || j2 == 'C'){
				b2 = 1;
			}
			else{
				b2 = 0;
			}
			if (b1 == b2){
				cout<<"1";
				if(b1 == 0 && b2 == 0){
					cout<<"1";
				}
				else if(j1 == 'B' || j2 == 'B'){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			else{
				cout<<"00";
			}
			
			
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}
