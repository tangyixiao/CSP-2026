#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool cp(string t1,string t2){
	if(t1[0]==t2[0] && t1[1]==t2[1]) return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if (!cp(c1,c2)) {
		cout << "0000"<<"\n";
		return 0;
	}
	if(s1[0]!=s2[0] || s1[1]!=s2[1]){
		cout << "1000"<<"\n";
		return 0;
	}
	if(s1[2]<='C'&&s2[2]>'C'){
		cout << "1100"<<"\n";
		return 0;
	}
	if(s2[2]<='C'&&s1[2]>'C'){
		cout << "1100"<<"\n";
		return 0;
	}
	if(abs(s1[2]-s2[2])!=1){
		cout << "1110"<<"\n";
		return 0;
	}
	cout << "1111\n";
	return 0;
}