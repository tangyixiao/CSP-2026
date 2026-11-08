#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	char a[2], b[2];
	char n[3], d[3];
	cin >> a >> n ;
	char c[3] ;
	c[0] = n[0];
	c[1] = n[1];
	c[2] = n[2];
	cin >> b >> d;
	if(a[0] == b[0] && a[1] == b[1]){
		cout << "1";
		if(c[0] == d[0] && c[1] == d[1]){
			cout<<"1";
			if(c[2] == 'A'){
				if(d[2] == 'B')	cout << "11";
				else if(d[2] == 'C') cout <<"10";
				else cout <<"00";
			}
			else if(c[2] == 'B'){
				if(d[2] == 'A' || d[2] == 'C')	cout << "11";
				else cout <<"00";
			}
			else if(c[2] == 'C'){
				if(d[2] == 'B')	cout << "11";
				else if(d[2] == 'A') cout <<"10";
				else cout <<"00";
			}
			else if(c[2] == 'D'){
				if(d[2] == 'F')	cout << "11";
				else cout <<"00";
			}
			else{
				if(d[2] == 'D')	cout << "11";
				else cout <<"00";
			}
		}
		else cout <<"000";
	} 
	else cout <<"0000";
	return 0;
} 

