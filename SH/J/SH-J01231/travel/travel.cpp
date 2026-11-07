#include<bits/stdc++.h>
using namespace std;
int main( ){
	freopen("travel.in","r",stdin) ;
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a >> b>>c>>d;
	if( a== c){
		if ( b[0] == d[0] &&b[1] == d[1]){
			if ('A'<=b[2] &&b[2] <='C' &&'A'<=d[2] &&d[2] <='C'  ){
				if (abs(b[2]-d[2]) == 1){
					cout << "1111" <<endl;
				}else{
					cout <<"1110" <<endl;
				}
			}
			else if ((b[2] == 'D' || b[2] == 'F') && (d[2] == 'D' || d[2] == 'F')){
				cout <<"1111" << endl;
			}
			else{
				cout <<"1100" <<endl;
			}
				
		}
		else{
			cout <<"1000" << endl;
		}
	}
	else{
		cout << "0000" << endl;
	}
	return 0;
} 
