#include <bits/stdc++.h>
using namespace std;

int main() 
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int a,b,A,B,la,lb; string pa,pb;
	cin >> a >> pa >> b >> pb;
	A=pa[2]-'A'+1; B=pb[2]-'A'+1;
	
	if(pa[0]=='0') {la=pa[1]-'0';}
	else {la=pa[1]-'0'+10;}
	
	if(pb[0]=='0') {lb=pb[1]-'0';}
	else {lb=pb[1]-'0'+10;}
	
	if(a!=b) {cout << "0000" << endl;}
	else if(la!=lb) {cout << "1000" << endl;}
	else if((A>=1&&A<=3&&B>=4&&B<=5)||(A>=4&&A<=5&&B>=1&&B<=3)) {cout << "1100" << endl;}
	else if(abs(A-B)!=1) {cout << "1110" << endl;}
	else {cout << "1111" << endl;}
	
	fclose(stdin);
	fclose(stdout); 
}
