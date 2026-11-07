#include<bits/stdc++.h>
using namespace std;
string s,c_1,c_2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	getline(cin,s);
	c_1=s.substr(0,6),c_2=s.substr(7,13);
	if(c_1.substr(0,2)==c_2.substr(0,2)){
		cout<<"1";
		if(c_1.substr(3,2)==c_2.substr(3,2)){
			cout<<"1";
			if(((c_1[5]>='A'&&c_1[5]<='C')&&(c_2[5]>='A'&&c_2[5]<='C'))||((c_1[5]>='D'&&c_1[5]<='F')&&(c_2[5]>='D'&&c_2[5]<='F'))){
				cout<<"1";
				if(abs(c_1[5]-c_2[5])==1)cout<<"1";
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}