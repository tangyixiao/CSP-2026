#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	if(b[1]==d[1]){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if(b[2]<='C'){
		if(d[2]<='C'){
			cout<<"1";
			if(b[2]=='B'){
				cout<<"1";
				return 0;
			}else{
				if(d[2]=='B'){
					cout<<"1";
					return 0;
				}
				cout<<"0";
				return 0;
			}
		}else{
			cout<<"00";
			return 0;
		}
	}else{
		if(d[2]>'C'){
			cout<<"11";
		}else{
			cout<<"00";
			return 0;
		}
	}
	return 0;
}
