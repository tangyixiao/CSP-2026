#include<iostream>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a_line,b_line;
	char a[10],b[10];
	cin >> a_line >> a >> b_line >> b;
	//cout << a_line << a << b_line << b;
	if(a_line==b_line){
		cout << '1';
	}else{
		cout << "0000";
		return 0;
	}
	if(a[0]==b[0] && a[1]==b[1]){
		cout << '1';
	}else{
		cout << "000";
		return 0;
	}
	if((a[2]<='C' && b[2]<='C') || (a[2]>'C' && b[2]>'C')){
		cout << '1';
	}else{
		cout << "00";
		return 0;
	}
	if((a[2]-b[2] == 1) || (a[2]-b[2] == -1)){
		cout << '1';
	}else{
		cout << '0';
	}
}