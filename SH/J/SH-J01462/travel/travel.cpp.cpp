#include <iostream>
using namespace std;
int main(){
	int a,c;
	string b,d;
	cin>>a>>b>>c>>d;
	if(a!=c){
	cout<<"0000";
	}else{
		cout<<1;
		if(b=="01A"&&d=="01B"||b=="01B"&&d=="01A"||b=="01B"&&d=="01C"||b=="01C"&&d=="01B"||b=="01D"&&d=="01F"||b=="01F"&&d=="01D"){
			cout<<111;
		}else if(b=="01A"&&d=="01C"||b=="01C"&&d=="01A"||b=="02A"&&d=="02C"||b=="02C"&&d=="02A"||b=="03A"&&d=="03C"||b=="03C"&&d=="03A"||b=="04A"&&d=="04C"||b=="04C"&&d=="04A"||b=="16A"&&d=="16C"||b=="16C"&&d=="16A"||b=="17A"&&d=="17C"||b=="17C"&&d=="17A"){
			cout<<110;
		}else{
			cout<<100;
		}
	}
}
