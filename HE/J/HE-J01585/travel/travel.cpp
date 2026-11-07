#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a!=c){
		cout<<"0000";
	}
	else{
		if(b[1]==d[1]&&b[0]==d[0]){
			if(b[2]<='C'&&d[2]<='C'){
				if(b[2]=='B'||d[2]=='B'){
					cout<<"1111";
				}
				else{
					cout<<"1110";
				}
			}
			else if(b[2]>'C'&&d[2]>'C'){
				cout<<"1111";
			}
			else{
				cout<<"1100";
			}
		}
		else{
			cout<<"1000";
		}
	}
	return 0;
}
