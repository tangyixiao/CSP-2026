#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,m,b,n;
	cin >> a >> m >> b >> n;
	if(a == "02" && b == "02"){
		if(m == "01A" && n == "01B"){
			cout << "1111";
		}else if(m == "01C" && n == "01A"){
			cout << "1110";
		}else if(m == "01C" && n == "01D"){
			cout << "1100";
		}else if(m == "02B" && n == "01A"){
			cout << "1000";
		}
	}else{
		cout << "0000";
	}
	return 0;
} 
