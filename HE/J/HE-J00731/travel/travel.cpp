#include<bits/stdc++.h>
using namespace std;
long long a,c,l,k;
string b,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	l=b[2]-d[2];
	if(a==c){
		cout<<"1";
		if(b[0]==d[0]&&b[1]==d[1]){
			cout<<"1";
			if(b[2]<='C'&&d[2]<='C' or b[2]>'C'&&d[2]>'C'){
				cout<<"1";
				if(abs(l)==1){
					cout<<"1";

				}
				else cout<<"0";
			}
			else cout<<"0"<<"0";
		}
		else cout<<"0"<<"0"<<"0";

	}
	else cout<<"0"<<"0"<<"0"<<"0";



	return 0;
}
