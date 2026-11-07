#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2){
		cout << "1";
	}else{
		cout << "0000";
		return 0;
	}
	string line1=s1.substr(0,2);
	string line2=s2.substr(0,2);
	if(line1==line2){
		cout << "1";
	}else{
		cout << "000";
		return 0;
	}
	char seat1=s1[2];
	char seat2=s2[2];
	bool situ1=(seat1>='A' && seat1<='C' && seat2>='A' && seat2<='C');
	bool situ2=(seat1>='D' && seat1<='F' && seat2>='D' && seat2<='F');
	if(situ1 || situ2){
		cout << "1";
	}else{
		cout << "00";
		return 0;
	}
	int get_seat=abs(int(seat1)-int(seat2));
	if(get_seat==1){
		cout << "1";
	}else{
		cout << "0";
	}
	return 0;
}
