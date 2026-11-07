#include <bits/stdc++.h>
using namespace std;
char c1[10],s1[10],c2[10],s2[10];
int q1,q2,q3,q4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1[1]>>c1[2]>>s1[1]>>s1[2]>>s1[3]>>c2[1]>>c2[2]>>s2[1]>>s2[2]>>s2[3];
	int c1n=(c1[1]-'0')*10+(c1[2]-'0'),
	    c2n=(c2[1]-'0')*10+(c2[2]-'0'),
		s1n=(s1[1]-'0')*10+(s1[2]-'0'),
		s2n=(s2[1]-'0')*10+(s2[2]-'0');

	if(c1n==c2n){
		q1=1;
		if(s1n==s2n){
			q2=1;
			if((s1[3]<='C' && s2[3]<='C') || (s1[3]>='D' && s2[3]>='D')){
				q3=1;
				if(s1[3]=='B' || s2[3]=='B' || s1[3]=='D' || s2[3]=='D'){
					q4=1;
				}
				else q4=0;
			}
			else q3=0;
		}
		else q2=0;
	}
	else q1=0;
	cout<<q1<<q2<<q3<<q4;
	fclose(stdin);
	fclose(stdout);
	return 0;




}
