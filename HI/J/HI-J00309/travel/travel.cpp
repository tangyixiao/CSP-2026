#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,c;
	string b,d;
	cin>>a>>b>>c>>d;
	if(a!=c){
		cout<<"0000";
	}
	else{
		cout<<"1";
		if(b[0]!=d[0]||b[1]!=d[1]){
			cout<<"000";
		}
		else{
			cout<<"1";
			if((b[2]<='C'&&d[2]<='C')||(b[2]>='D'&&d[2]>='D')){
				cout<<'1';
				if((abs(d[2]-b[2])==1&&b[2]<='C'&&d[2]<='C')||(d[2]=='D'&&b[2]=='F')||(d[2]=='F'&&b[2]=='D')){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			else{
				cout<<"00"; 
			}
		}
	}
	return 0;
}
