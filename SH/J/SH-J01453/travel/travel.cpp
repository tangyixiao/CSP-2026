#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","w",stdin);
	freopen("travel.out","r",stdout);
	int a,b;
	string c,d;
	cin>>a;
	cin>>c;
	cin>>b;
	cin>>d;
	if(a==b){
		cout<<"1";
		if(c[0]==d[0] && c[1]==d[1]){
			cout<<"1";
			if(c[2]<='C' && d[2]<='C'){
				cout<<"1";
				if(c[2]=='B' or d[2]=='B'){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			else{
				if(c[2]>='D' && d[2]>='D'){
					cout<<"11";
				}
				else{
					cout<<"00";
				}
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}
