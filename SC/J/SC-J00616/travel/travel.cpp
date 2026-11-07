#include<bits/stdc++.h>
//#define int long long
using namespace std;
string s1,s2,s3,s4;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> s1 >> s2 >> s3 >> s4;
	if(s1==s3)cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	string s5="";
	s5+=s2[0];
	s5+=s2[1];
	string s6="";
	s6+=s4[0];
	s6+=s4[1];
	s2=s2[2],s4=s4[2];
//	cout << s5 << ' ' << s6 << ' ' << s2 << ' ' << s3 <<' ' ;
	if(s5==s6){
		cout << 1;  
	}else {
		cout << "000";
		return 0;
	}
	bool f1=0,f2=0;
	if(s2>"C")f1=1;
	if(s4>"C")f2=1;
	if(f1==f2)cout << 1;
	else {
		cout << "00";
		return 0;
	}
	if((s2[0]=='A'&&s4[0]=='C')||(s2[0]=='C'&&s4[0]=='A')){
		cout << 0;
	}else cout << 1;
	return 0;
}