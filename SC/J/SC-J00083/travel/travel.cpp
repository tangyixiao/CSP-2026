#include <iostream>
using namespace std;
int main(){
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		if(s1==s2+'1'){
			cout<<"1111";
		}
		else if(s1!=s2){
			cout<<"1100";
		}
		else{
			cout<<"1110";
		}
		}
	else if(c1!=c2){
		cout<<"0000";
	}
		
	return 0;
}