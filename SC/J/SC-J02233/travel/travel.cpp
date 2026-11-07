#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2) printf("0000");//no车厢
	else{
		if(s1[0]!=s2[0]||s1[1]!=s2[1]) printf("1000");//no排
		else{
			if(s1[2]>'C'&&s2[2]<'D'||s1[2]<'D'&&s2[2]>'C'){//no侧
				if(s1[2]!='C'&&s2[2]!='D'||s1[2]!='D'&&s2[2]!='C')//no邻
					printf("1100");
				else if(s1[2]=='C'&&s2[2]=='D'||s1[2]=='D'&&s2[2]=='C')
					printf("1101");
			}
			else {
				
				if(s1[2]=='A'&&s2[2]=='B') printf("1111");
				else if(s1[2]=='B'&&s2[2]=='C') printf("1111");
				else if(s1[2]=='B'&&s2[2]=='A') printf("1111");
				else if(s1[2]=='C'&&s2[2]=='B') printf("1111");
				else if(s1[2]=='D'&&s2[2]=='E') printf("1111");
				else if(s1[2]=='E'&&s2[2]=='D') printf("1111");
				else printf("1110");
			}
		}
	}
	return 0;
}