#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	string a1,a2,b1,b2;
	cin >>a1>>a2>>b1>>b2;
	if(a1 == b1){
		cout <<"1";
	}else{
		cout <<"0000";
		freopen("travel.out","w",stdout);
		return 0;
	}
	int m =int(a2[0])*10+int(a2[1])*1;
	int n =int(b2[0])*10+int(b2[1])*1;
	if(m ==n){
		cout <<"1";
		if(a2[2]<='C'&&b2[2]<='C'){
			cout <<"1";
			if((a2[2]=='A'||a2[2]=='C')&&b2[2]=='B'){
				cout << "1";
			}else if(a2[2]=='B'&&(b2[2]=='A'||b2[2]=='C')){
				cout <<"1";
			}else{
				cout<<"0";
			}
		}else if(a2[2]>'C'&&b2[2]>'C'){
			cout <<"11";
		}else{
			cout <<"00";
			freopen("travel.out","w",stdout);
			return 0;
		}
	}else{
		cout <<"000";
		freopen("travel.out","w",stdout);
		return 0;
	}
	
	freopen("travel.out","w",stdout);
	return 0;
} 
