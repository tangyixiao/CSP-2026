#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a_1,b_1,a_2,b_2;
	cin>>a_1>>b_1>>a_2>>b_2;
	if(a_1[0]==a_2[0]&&a_1[1]==a_2[1]){
		cout<<"1";
		if(b_1[0]==b_2[0]&&b_1[1]==b_2[1]){
			cout<<"1";
			if(b_1[2]=='D'||b_1[2]=='F'){
				if(b_2[2]=='D'||b_2[2]=='F'){
					cout<<"11";
				}else{
					cout<<"00";
				}
			}else if(b_1[2]=='A'||b_1[2]=='B'||b_1[2]=='C'){
				if(b_2[2]=='A'||b_2[2]=='B'||b_2[2]=='C'){
					cout<<"1";
					if(b_2[2]==b_1[2]-1||b_2[2]==b_1[2]+1){
						cout<<"1";
					}else{
						cout<<"0";
					}
				}else{
					cout<<"00";
				}
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}