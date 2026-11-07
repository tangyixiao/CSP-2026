#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int b_b=(b[0]-'0')*10+b[1]-'0';
	int d_d=(d[0]-'0')*10+d[1]-'0';
	char b_w=b[2];
	char d_w=d[2];
	if(a!=c){
		cout<<"0000";
	}
	else{
		cout<<1;
		if(b_b!=d_d){
			cout<<"000";
		}
		else{
			cout<<1;
			if((b_w=='A'&&(d_w=='B'||d_w=='C'))||(d_w=='A'&&(b_w=='B'||b_w=='C'))||(b_w=='D'&&d_w=='F')||(b_w=='F'&&d_w=='D')||(b_w=='C'&&d_w=='B')||(b_w=='B'&&d_w=='C')){
				cout<<1;
				if(b_w=='A'||b_w=='B'||b_w=='C'){
					if(abs(int(b_w)-int(d_w))!=1){
						cout<<"0";
					}
					else{
						cout<<1;
					}
				}
				else{
					cout<<1;
				}
			}
			else{
				cout<<"00";
			}
		}
	}
	return 0;
}