#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	char A=A,B=B,C=C,D=D,F=F;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<"1";
		if(b[0]==d[0]&&b[1]==d[1]){
			cout<<"1";
			if(char(b[2])<=C&&char(d[2])<=C&&char(b[2])>=A&&char(d[2])>=A){
				cout<<"1";
				if(char(b[2])==A&&char(d[2])==B||char(d[2])==B&&(b[2])==A){
					cout<<"1";
				}
				else if(char(b[2])==B&&char(d[2])==C||char(d[2])==C&&(b[2])==B){
					cout<<"1";
				}
				else if(char(b[2])==A&&char(d[2])==C||char(d[2])==C&&(b[2])==A){
					cout<<"0";
				}
				else{
					cout<<"0";
				}
			}
			else if(b[2]<=F&&d[2]<=F&&b[1]>=D&&d[2]>=D){
				cout<<"1";
				if(char(b[2])==D&&char(d[2])==F||char(d[2])==F&&(b[2])==D){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			else{
				cout<<"0";
			}
		}
		else{
			cout<<"0";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
} 
