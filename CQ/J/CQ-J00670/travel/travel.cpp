#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2,z1,z2;
bool a,b,c,d,a2,a3;
int main(){
	cin>>c1>>s1>>c2>>s2;
	z1=s1[2];
	z2=s2[2];
	a2==(z1=='E'||z1=='F')&&(z2=='E'||z2=='F');
	a3=(z1=='A'||z1=='B'||z1=='C')&&(z2=='A'||z2=='B'||z2=='C');
	if(c1==c2){
		a=1
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			b=1;
			if(a2||a3){
				c=1;
				if(a2||((z1=='A'&&z2=='B')||(z2=='A'&&z1=='B')||(z1=='C'&&z2=='B')||(z2=='C'&&z1=='B'))){
					d=1;
				}
			}
		}
	}
	cout<<a<<b<<c<<d;
	return 0;
}
