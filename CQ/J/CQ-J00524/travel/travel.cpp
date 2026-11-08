#include<bits/stdc++.h>
using namespace std;
string n1,m1,n2,m2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n1>>m1>>n2>>m2;
	if(n1!=n2)cout<<"0000";
	else if(m1[0]+m1[1]!=m2[0]+m2[1])cout<<"1000";
	else if((m1[2]<='C'&&m2[2]>'C')||(m1[2]>'C'&&m2[2]<='C'))cout<<"1100";
	else if(abs(m1[2]-m2[2])!=1)cout<<"1110";
	else cout<<"1111";
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
