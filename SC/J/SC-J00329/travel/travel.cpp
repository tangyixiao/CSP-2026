#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	if(a == c){
		cout << "1";
	}
	else{
		cout << "0000";
	}
	if(b+1 == d || b-1 == d){
		cout << "111";
	}
	return 0;
}