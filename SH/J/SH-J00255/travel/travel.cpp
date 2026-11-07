#include<bits/stdc++.h>
using namespace std;
int main(){
	int c1,c2,a=0,b=0,c=0,d=0;
	char s1[10];
	char s2[10];
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		a=1;
		if(s1[0]==s2[0] and s1[1]==s2[1]){
			b=1;
			if(s1[2] == 65 or s1[2]==66 or s1[2]==67 and s2[2]==65 or s2[2]==66 or s2[2]==67){
				c=1;
				if(s1[2]==65 and s2[2]==67 or s1[2]==67 and s2[2]==65 or s1[2]==65 or s1[2]==66 or s1[2]==67 and s2[2]==68 or s2[2]==70 or s1[2]==68 or s1[2]==70 and s2[2]==65 or s2[2]==66 or s2[2]==67)
					d=0;
				else
					d=1;
			}
			else if(s1[2]==68 or s1[2]==70 and s1[2]==68 or s1[2]==70){
				c=1;
				d=1;	
			}
			}
	}
	cout<<a<<b<<c<<d;
	
	
	
	return 0;
}
