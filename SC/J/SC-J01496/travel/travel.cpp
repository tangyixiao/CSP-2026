#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1 == c2){
		cout<<"1";
		char a1[3],a2[2];
		a1[0]=s1[0];
		a1[1]=s1[1];
		a1[2]=s1[2];
		a2[0]=s2[0];
		a2[1]=s2[1];
		a2[2]=s2[2];
		if(a1[0] == a2[0] && a1[1] == a2[1]){
			cout<<"1";
			if((a1[2]<'D' && a2[2]<'D') || (a1[2]>'C' && a2[2]>'C')){
				cout<<"1";
				if((a1[2] == 'D' && a2[2] == 'F') || (a1[2] == 'F' && a2[2] == 'D')){
					cout<<"1";
				}
				else{
					if((a1[2] == 'A' && a2[2] == 'B') || (a1[2] == 'B' && a2[2] == 'A')){
						cout<<"1";
					}
					else{
						if((a1[2] == 'C' && a2[2] == 'B') || (a1[2] == 'B' && a2[2] == 'C')){
							cout<<"1";
						}
						else{
							cout<<"0";
						}	
					}
				}
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else{
		cout<<"0000";
	}
	return 0;
} 