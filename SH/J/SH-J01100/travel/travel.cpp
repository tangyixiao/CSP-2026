#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1==c2){
		cout << "1";
	}
	else{
		cout << "0000";
		return 0;
	}
	int ss1=0,ss2=0;
	int sss1,sss2;
	ss1=(s1[0]-'0')*10+(s1[1]-'0');
	ss2=(s2[0]-'0')*10+(s2[1]-'0');
	if (s1[2]=='A'){
		sss1=1;
	}
	else if (s1[2]=='B'){
		sss1=2;
	}
	else if (s1[2]=='C'){
		sss1=3;
	}
	else if (s1[2]=='D'){
		sss1=4;
	}
	else{
		sss1=5;
	}
	if (s2[2]=='A'){
		sss2=1;
	}
	else if (s2[2]=='B'){
		sss2=2;
	}
	else if (s2[2]=='C'){
		sss2=3;
	}
	else if (s2[2]=='D'){
		sss2=4;
	}
	else{
		sss2=5;
	}
	if (ss1==ss2){
		cout << "1";
	}
	else{
		cout << "000";
		return 0;
	}
	if ((sss1<=3 && sss2<=3) || (sss1>=4 && sss2>=4)){
		cout << "1";
	}
	else{
		cout << "00";
		return 0;
	}
	if (abs(sss1-sss2)==1 && ((sss1!=3 && sss2!=4) || (sss1!=4 && sss2!=3))){
		cout << "1";
	}
	else{
		cout << "0";
	}
	return 0;
}
