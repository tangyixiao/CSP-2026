#include<bits/stdc++.h>
using namespace std;
int abcdefg(char a,char b){
	if(a == 'A'){
		if(b == 'B' || b == 'C')	return 1;
	}
	if(a == 'B'){
		if(b == 'A' || b == 'C')	return 1;
	} 
	if(a == 'C'){
		if(b == 'B' || b == 'A')	return 1;
	}
	if(a == 'D' && b == 'F') return 1;
	if(a == 'F' && b == 'D') return 1;
	return 0;
}
int pppp(char a, char b){
	if(a == 'A' && b == 'B') return 1;
	if(b == 'A' && a== 'B') return 1;
	if(a == 'B' && b == 'C') return 1;
	if(b == 'B' && a == 'C') return 1;
	if(a == 'D' && b == 'F') return 1;
	if(b == 'D' && a == 'F') return 1;
	return 0;
}
int main(){
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	string a,b,c,d;
	cin >> a >> b >> c >> d;
	if(a == c) cout << 1;
	else{
		cout << "0000";
		return 0;
	}
	
	
	if(b[0] == d[0] && b[1] == d[1]){
		cout << 1;
	}else{
		cout << "000";
		return 0;
	}	
	
	
	if(abcdefg(b[2] , d[2])){
		cout << 1;
	}else{
		cout << "00";
		return 0;
	}
	
	
	if(pppp(b[2],d[2])){
		cout << 1;
	}
	else {
		cout << 0;
	}
	
	
	
	
	return 0;
} 
