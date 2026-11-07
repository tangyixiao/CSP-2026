#include<bits/stdc++.h>
using namespace std;
char c1[2],s1[3],c2[2],s2[3];
bool func(char a,char b,bool o){
	if(o){
		if(a>='A'&&a<='C'){
			if(b>='A'&&b<='C')return 1;
			return 0;
		}else if(a=='D'||a=='F'){
			if(b=='D'||b=='F')return 1;
			return 0;
		}
	}else{
		if(a<='C'&&b<='C'){
			if((char(a+1)==b)||(char(a-1)==b))return 1;
			return 0;
		}else if((a=='D'||a=='F')&&((b=='D'||b=='F'))){
			if((a=='D'&&b=='F')||(a=='F'&&b=='D'))return 1;
			return 0;
		}return 0;
	}return 0;
}int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	scanf("%s%s%s%s",c1,s1,c2,s2);
	int c1i=(c1[0]-'0')*10+(c1[1]-'0'),s1i=(s1[0]-'0')*10+(s1[1]-'0'),c2i=(c2[0]-'0')*10+(c2[1]-'0'),s2i=(s2[0]-'0')*10+(s2[1]-'0');
	char s1c=s1[2],s2c=s2[2];
	if(c1i==c2i){
		if(s1i==s2i){
			if(func(s1c,s2c,1)){
				if(func(s1c,s2c,0))printf("1111\n");
				else printf("1110\n");
			}else printf("1100\n");
		}else printf("1000\n");
	}else printf("0000\n");
	fclose(stdin);
	fclose(stdout);
	return 0;
}