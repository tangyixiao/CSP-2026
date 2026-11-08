#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","w",stdin);
	freopen("travel.out","r",stdout);						
	string a,b,c,d;
	cin >>a >> b >>c >> d;
	int x,y,z,l,m,n;
	x=a[0]*10+a[1];
	y=c[0]*10+c[1];
	z=b[0]*10+b[1];
	l=d[0]*10+d[1];
	if(b[2]=='A')
		m = 1;
	if(b[2]=='B')
		m=2;
	if(b[2]=='C')
		m=3;
	if(b[2]=='D')
		m=4;
	if(b[2]=='E')
		m=5;
	if(b[2]=='F')
		m=6;
	if(d[2]=='A')
		n = 1;
	if(d[2]=='B')
		n=2;
	if(d[2]=='C')
		n=3;
	if(d[2]=='D')
		n=4;
	if(d[2]=='E')
		n=5;
	if(d[2]=='F')
		n=6;
	if(x==y){
		cout << "1";
		if(z==l){
			cout << "1";
			if(m<=3&&n<=3||m>3&&n>3){
				cout << "1";
				if(m==++n || n==++m){
					cout << "1";
				}else{
					cout << "0";
				}
			}else{
				cout << "00";
			}
		}else{
			cout << "000";
		}
	}else{
		cout << "0000";
	}
	return 0;
}
