#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2){
		cout << "0000";
		return 0;
	}
	cout << "1";
	char c1= s1[2];
	char c2= s2[2];
	if ((s1[0] == s2[0]) && (s1[1] == s2[1])){
		cout << "1";
		if (((c1 == 'A') || (c1 == 'B')) || (c1 == 'C') && ((c2 == 'A') || (c2 == 'B') || (c2 == 'C'))){
		    cout << "1";	
			if (c1 == 'A'){
				if (c2 == 'B'){
					cout << "1";
				}else{
					cout << "0";
				}
			}else if (c1 == 'C'){
				if (c2 == 'B'){
					cout << "1";
				}else{
					cout << "0";
				}	
			}else if (c1 == 'B'){
				cout << "1";
			}else{
				cout <<"0";
			}  
		}else if (((c1 == 'D' )|| (c1 == 'E')) && ((c2 == 'D') || (c2 == 'E'))){
			cout << "1" << "1";
		}else{
			cout << "0" << "0";
		}
	}else{
		cout << "0" << "0" << "0";
	}
	return 0;
} 
