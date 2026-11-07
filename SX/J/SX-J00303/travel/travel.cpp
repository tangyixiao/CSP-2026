#include <bits/stdc++.h>
using namespace std;

int main(){
	//feropen("travel.in","r",stdin);
	//feropen("travel.out","w",stdout);
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if(a==c){
		cout << 0;
	}
	if(a!=c){
		cout << 1;
	}
	if(a+b+1==c+d||a+b-1==c+d){
		cout << 0;
	}
	if(a+b+1!=c+d||a+b-1!=c+d){
		cout << 1;
	}
	if(b+1==d||b-1==d){
		cout << 0;
	}
	if(b+1!=d||b-1!=d){
		cout << 1;
	}
	if(b-d!=d-b){
		cout << 1;
	}
	else{
		cout << 0;
	}
}