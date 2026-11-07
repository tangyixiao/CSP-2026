#include <iostream>
using namespace std;

int main(){
	string p[20];
	int l[6];
	int a,b,c,d,x=0;
	cin >> a >> b >> c >> d;
	if (a!=1&&a!=16&&b!=1&&b!=16&&a==b){
		x++;
		if(c)	
			x= x*10+1;
		else
			x=x*10;
		cout << x;
	}
	else
		cout << "0000";	

	return 0;
}

