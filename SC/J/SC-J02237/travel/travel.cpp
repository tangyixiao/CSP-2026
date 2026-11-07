#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel","r",stdin);
	freopen("travel","w",stdout);
	string c1,c3;
	char c2[3],c4[3];
	bool a=0,b=0,c=0,d=0;
	cin >> c1 >> c2 >> c3 >> c4;
	if (c1==c3){
		a=1;
		if (c2[0]==c4[0]&&c2[1]==c4[1]){
			b=1;
			if('D'<=c2[2]&&'D'<=c4[2]){
				c=1;
				d=1;
			}
			else if ('C'>=c2[2]&&'C'>=c4[2]){
				c=1;
				if(c2[2]=='B'||c4[2]=='B'){
					d=1;
				}
			}
		} 
	}
	cout << a << b << c << d;
    return 0;
} 