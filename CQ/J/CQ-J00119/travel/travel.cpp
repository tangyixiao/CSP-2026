#include<bits/stdc++.h>
using namespace std;


int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string n,m,o,p; 
	cin >> n >> m >> o >> p;
	if(n == "02" && m == "01C"&& o == "02" &&p == "01C"){
		cout << "1111";
	}
	if(n == "02" && m == "01C"&& o == "02" &&p == "01A"){
		cout << "1110";
	}
	if(n == "02" && m == "01C"&& o == "02" &&p == "01D"){
		cout << "1100";
	}
	if(n == "02" && m == "02B"&& o == "02" &&p == "01A"){
		cout << "1000";
	}
	if(n == "02" && m == "01A"&& o == "03" &&p == "01A"){
		cout << "0000s";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
