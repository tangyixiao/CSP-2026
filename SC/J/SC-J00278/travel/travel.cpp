#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		putchar('1');
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			putchar('1');
			if(('A'<=s1[2]&&s1[2]<='C'&&'A'<=s2[2]&&s2[2]<='C')||('D'<=s1[2]&&s1[2]<='E'&&'D'<=s2[2]&&s2[2]<='E')){
				putchar('1');
				if(abs(s1[2]-s2[2])==1){
					puts("1");
				}else{
					puts("0");
				}
			}else{
				puts("00");
			}
		}else{
			puts("000");
		}
	}else{
		puts("0000");
	}
}