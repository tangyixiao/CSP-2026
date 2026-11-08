#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string a1,b1,a2,b2;
	cin >> a1 >> b1 >> a2 >> b2;
	if(a1 == a2){
		cout << "1";
		string c1 = b1.substr(0,2),c2 = b2.substr(0,2);
		if(c1 == c2){
			cout << "1";
			char d1 = b1[2],d2 = b2[2];
			if(d1 == 'A'){
				if(d2 == 'B'){
					cout << "11";
					return 0;
				}
				if(d2 == 'C'){
					cout << "10";
					return 0;
				}
				else{
					cout << "00";
					return 0;
				}
			}
			if(d1 == 'B'){
				if(d2 == 'A'||d2 == 'C'){
					cout << "11";
					return 0;
				}
				else{
					cout << "00";
					return 0;
				}
			}
			if(d1 == 'C'){
				if(d2 == 'B'){
					cout << "11";
					return 0;
				}
				if(d2 == 'A'){
					cout << "10";
					return 0;
				}
				else{
					cout << "00";
					return 0;
				}
			}
			if(d1 == 'D'){
				if(d2 == 'E'){
					cout << "11";
				}
				else{
					cout << "00";
				}
			}
			if(d1 == 'E'){
				if(d2 == 'D'){
					cout << "11";
				}
				else{
					cout << "00";
				}
			}
		}
		
		else{
			cout << "000";
			return 0;
		}
		
	}
	else{
		cout << "0000";
		return 0;
	}
		
	return 0;
} 

