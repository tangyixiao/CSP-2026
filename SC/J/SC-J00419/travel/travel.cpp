#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,a3;
	string b1,b2,b3;
	cin>>a1>>a2>>b1>>b2;
	a3=a2.substr(0,2);
	b3=b2.substr(0,2);
	char a4,b4;
	a4=a2[2];
	b4=b2[2];
	if(a1==b1){
		cout<<'1';
		if(a3==b3){
			cout<<'1';
			if((a4>='D'&&a4<='F'&&b4>='D'&&b4<='F')||(a4>='A'&&a4<='C'&&b4>='A'&&b4<='C')){
				cout<<'1';
				if((a4=='A' && b4=='C')||(a4=='C' && b4=='A')){
					cout<<'0';
				}else cout<<'1';
			}else cout<<"00";
		}else cout<<"000";
	}else{
		cout<<"0000";
	}
	return 0;
}