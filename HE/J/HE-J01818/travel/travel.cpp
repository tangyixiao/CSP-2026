#include <iostream>
#include <string>
using namespace std;
int main(){
	string c1,c2;
	string s1[2];
	string s2[2];
	cin>>c1>>c2;
	for(int i = 0;i<2;i++){
		cin>>s1[i];
		}
	for(int i = 0;i<2;i++){
		cin>>s2[i];
	}
	if(c1 == c2&&c1!= '01'&&c1!='16'&&c2 != '01'&&c2!= '16'){
			cout<<"1";
	}else{
		cout<<"0";
	}
	if(s1[0] == s2[0]){
		cout<<"1";
	}else{
		cout<<"0";
	}
	
	return 0;
}
