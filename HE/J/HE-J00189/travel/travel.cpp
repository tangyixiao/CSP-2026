#include <bits/stdc++.h>
using namespace std;
string f, g , h; 
int cnt;
int main(){
	freopen("tralve.in","r" ,stdin);
	freopen("travle.out","w",stdout);
	string a , b , c , d ;
	cin >> a >> b >> c >> d;
	if(a == "01" && c == "01"){
		cout << 1;
	}
	else if(a == "01" && c != "01"){
		cout << 0;
	}
	else if(a != "01" && c == "01"){
		cout << 0;
	}
	else{
		cout << 1;
	}
	if(b[0] == d[0] && b[1] == d[1]){
		cout << 1;
		if(b[2] == 'A' || b[2] == 'B' || b[2] == 'C'){
			if(d[2] == 'A' || d[2] == 'B' ||d[2] == 'C'){
				cout << 1;
			}
				if((b[2] == 'A' || b[2] == 'B') && (d[2] == 'A'|| d[2] == 'B')){
					cout << 1;
				}
				else if((b[2]== 'C'|| b[2] == 'B') && (d[2]== 'C' || d[2] == 'B')){
					cout << 1;
				}
				else{
					cout << 0;
				} 
		}
		else if (b[2] == 'D' || b[2] == 'F'){
			if(d[2] == 'D' || d[2] == 'F'){
			cout << 1;
			}
			if((b[2] == 'D' || b[2] == 'F') && (d[2] == 'D' || d[2] == 'F')){
				cout << 1;
			} 
			else{
				cout << 0;
			}
		}
	}
	else{
		cout << 0;
		cout << 0;
	}
	return 0;
}

