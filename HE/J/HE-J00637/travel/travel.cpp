#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,z1,c2,z2,a,b;
	cin >> c1 >> z1 >> c2 >> z2;
	a="",b="";
	for(int i= 0;i<2;i++){
		a+=z1[i];
		b+=z2[i];
	}
	char n=z1[2],m=z2[2];
	int nyp1=0,nyp2=0,sl=0;
	if(n>='A'&&n<='C') nyp1=1;
	if(m>='A'&&m<='C') nyp2=1;
	if(n+1==m||n-1==m) sl=1;
	if(c1==c2){
		cout << "1";
		if(a==b){
			cout << "1";
			if(nyp1==nyp2){
				cout << "1";
				if(sl==1){
					cout << "1";
				}
				else{
					cout << "0";
				}
			}
			else{
				cout << "00";
			}
			
		}
		else{
			cout << "000";
		}
	}
	else{
		cout << "0000";
	}
		return 0;
} 
