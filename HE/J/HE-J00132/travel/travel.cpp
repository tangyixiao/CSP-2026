#include<iostream>
#include<string>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int c,s;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1[0]==c2[0] && c1[1]==c2[1]){
		cout << "1";
	}else{
		cout << "0000";
		return 0;
	}
	if(s1[0]==s2[0] && s1[1]==s2[1]){
		cout << "1";
	}else{
	    cout << "000";
    	return 0;
	}	 
	if(s1[2]=='A' || s1[2]=='B' || s1[2]=='C'){
		c=0;
	}else{
		c=1;
	}
	if(s2[2]=='A' || s2[2]=='B' || s2[2]=='C'){
		s=0;
	}else{
		s=1;
	}
	if(c==s){
		cout << "1";
		if(c==1 && s==1){
			cout << "1";
		}else{
			if(s1[2]=='A' && s2[2]=='C' || s1[2]=='C' && s2[2]=='A'){
				cout << "0";
			}else{
				cout << "1";
			}
			return 0;
		}
	}else{
		cout << "00";
		return 0;
	}
	return 0;
} 
