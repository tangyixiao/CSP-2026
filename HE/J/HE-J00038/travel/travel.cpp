#include <iostream>
#include <cmath>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string r1,r2,x1,x2;
	cin >> r1 >> r2;
	cin >> x1 >> x2;
	if (r1==x1) cout << '1';
	else{
		cout << "0000";
		return 0;
	}
	if (r2[0]==x2[0] && r2[1]==x2[1]) cout << '1';
	else{
		cout << "000";
		return 0;
	}
	if ((r2[2]<='C' && x2[2]<='C') || (r2[2]>'C' && x2[2]>'C')) cout << '1';
	else{
		cout << "00";
		return 0;
	}
	int a=r2[2]-'A',b=x2[2]-'A';
	if (abs(a-b)==1) cout << '1';
	else cout << '0';
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
