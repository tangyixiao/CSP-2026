#include<bits/stdc++.h>
using namespace std;
string s1,s2,ss1,ss2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> s1 >> ss1 >> s2 >> ss2;
	if(s1==s2){
		cout << 1;
		if(ss1[0]==ss2[0] && ss1[1]==ss2[1]){
			cout << 1; 
			if(max(ss1[2],ss2[2])-min(ss1[2],ss2[2])<=2 && max(ss1[2],ss2[2])!='D'){
				cout << 1;
				if(max(ss1[2],ss2[2])-min(ss1[2],ss2[2])==1){
					cout << 1;
				}
				else{
					cout << 0;
				}
			}
			else{
				cout << "00";
			}
		}
		else{
			cout << "000";
		}
	}
	else{
		cout << "0000";
	}
	return 0;
}
