#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b;   
	int a1,b1;
	cin >> a1 >> a >> b1 >> b;
	if (a1 == b1) cout << 1;
	else{
	    cout << "0000";
	    return 0;
	}
	int a2 = (a[0] - '0') * 10 + (a[1] - '0');
	int b2 = (b[0] - '0') * 10 + (b[1] - '0');
	if (a2 == b2) cout << 1;
	else{
	    cout << "000";
	    return 0;
	}
	char a3 = a[2];
	char b3 = b[2];
	int a4, b4;
	if (a3 == 'A' || a3 == 'B' || a3 == 'C') a4 = 1;
	else a4 = 0;
	if (b3 == 'C' || b3 == 'B' || b3 == 'A') b4 = 1;
	else b4 = 0; 
	if (a4 == b4) cout << 1;
	else {
		cout << "00";
		return 0;
	}
	if (a4 == 0) cout << 1;
	if ((a3 == 'A' && b3 == 'C') || (a3 == 'C' && b3 == 'A')) cout << 0;
	else cout << 1;                                                                                                                                                                                                                                                
	return 0;
} 
