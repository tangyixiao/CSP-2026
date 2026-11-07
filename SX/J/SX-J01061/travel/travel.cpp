#include <bits/stdc++.h>

using namespace std;

int main() {

	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	string Mycr, Mysr, Mycx, Mysx;
    
	cin>>Mycr>>Mysr>>Mycx>>Mysx;
	
	bool a=0, b=0, c=0, d=0;
	
	if(Mycr == Mycx) a = 1;
	if(a && Mysr[0] == Mysx[0] && Mysr[1] == Mysx[1]) b = 1;
	if(b){
		if(Mysr[2] <= 'C' && Mysx[2] <= 'C'){
			c = 1;
		}
		if((Mysr[2] == 'D' || Mysr[2] == 'F') && (Mysx[2] == 'D' || Mysx[2] == 'F')){
			c = 1;
		}
	}
	if(c){
		if(Mysr[2] == Mysx[2] + 1 || Mysr[2] == Mysx[2] - 1){
			d = 1;
		}
		if(Mysr[2] == 'D' && Mysx[2] == 'F'){
			d = 1;
		}
		if(Mysr[2] == 'F' && Mysx[2] == 'D'){
			d = 1;
		}
	}
	
	cout<<a<<b<<c<<d<<"\n";

	return 0;
}
/*

it should be a simple signature task
no any keng

//freopen attracting you here

hey I havn't made any changes why it is WA now
oh it's not initalized

so -static causes many changes

I have already waste half an hour in this

continue; 

*/
