#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);	
	int c1,c2;
	string s1,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		cout << "1";
	}else{
		cout<<"0";
	}
	if(c1 == c2 || s1 == s2){
		cout << "1";
	}else{
		cout << "0";
	}
	if(s1 == "01A" || s2 == "01B"){
		cout << "1";
	}else if(s1 == "B" || s2 == "A"){
		cout << "1";
	}else if(s1 == "A" || s2 == "C"){
		cout << "1";	
	}else if(s1 == "C" || s2 == "A"){
		cout << "1";
	}else if(s1 == "C" || s2 == "B"){
		cout << "1";
	}else if(s1 == "B" || s2 == "C"){
		cout << "1";
	}else if(s1 == "D" || s2 == "F"){
		cout << "1";
	}else if(s1 == "F" || s2 == "D"){
		cout << "1";	
	}else cout << "0";
	if(s1 == "A" || s2 == "B"){
		cout << "1";
	}else if(s1 == "B" ||s2 == "A"){
		cout << "1";
	}else if(s1 == "B" || s2 == "C"){
		cout << "1";
	}else if(s1 == "C" || s2 == "B"){
		cout << "1";
	}else if(s1 == "D" || s2 == "F"){
		cout << "1";
	}else if(s1 == "F" || s2 == "D"){
		cout << "1";
	}else cout << "0";
		
		
	
	
	
	return 0;	
}
