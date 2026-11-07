#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,c;
	ifstream("travel.in");
	ofstream("travel.out");
	if(s[0]==c[0]){						//两张车票对应的座位是否在同一节车厢
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	if((int)(s[1]+4)>=(int)(c[1])){
		cout<<"1";
		
	}
	else{
		cout<<"0";
	}
	if((int)(s[1]+4)>=(int)(c[1])){
	if((int)(s[1])==(int)(c[1]+1)||(int)(s[1])==(int)(c[1]+2)||(int)(s[1]+1)==(int)(c[1])||(int)(s[1]+2)==(int)(c[1])){
		cout<<"1";
	}
		else{
		cout<<"0";
	}
	}
	else{
		cout<<"0";
	}
	if((int)(s[1]+1)==(int)(c[1])||(int)(s[1])==(int)(c[1])){										//两张车票对应的座位是否相邻					
		if((int)(s[1])==((int)('01D')-1)||(int)(s[1])==((int)('01D'))){
			cout<<"0";
			return 0;
		}
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
}