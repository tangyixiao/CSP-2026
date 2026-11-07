#include<bits/stdc++.h>
using namespace std; 

freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);

string R1,R2,X1,X2;
int main(){
	int a=0,b=0;
	cin>>R1>>R2>>X1>>X2;
	if (R1[0]==X1[0] && R1[1]==X1[1] ) {
	cout<<"1";
	b=1;}
	else cout<<"0";
	if (R2[0]==X2[0] && R2[1]==X2[1] && b==1) {
		cout <<"1";
		a=1;
		if (R2[2]+X2[2]<'C'+'C'||R2[2]+X2[2]>'D'+'D') cout <<"1";
		else cout <<"0";
	}
	else cout <<"0"<<"0";
	if (abs(R2[2]-X2[2])==1 && R2[2]+X2[2]!='C'+'D' && a==1 && b==1) cout<<"1";
	else cout <<"0"; 
	return 0;
} 