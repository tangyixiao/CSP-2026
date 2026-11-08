#include <bits/stdc++.h>
using namespace std;

int main(){
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>c2;
	if(c1==c2){
		cout<<"11";
	}	
	else{
		cout<<"00";
	}
	if(s1!="C"&&s2!="D"){
		if(s1+1==s2||s1-1==s2){
			cout<<"11";
		}
		else{
			cout<<"00";
		}
	}
	else{
		cout<<"00";
	}
	return 0;
}
