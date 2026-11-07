#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
char s[5];
bool pd1(char c,char d){
	    if(c=='A'&&d=='B') return 1;
	    if(c=='B'&&d=='A') return 1;
	    if(c=='A'&&d=='C') return 1;
	    if(c=='C'&&d=='A') return 1;
	    if(c=='B'&&d=='C') return 1;
	    if(c=='C'&&d=='B') return 1;
	    if(c=='D'&&d=='F') return 1;
	    if(c=='F'&&d=='D') return 1;
	    return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(s1==s2){
		for(int i=0;i<=3;i++){
		   s[i]='0';
		   cout<<s[i];
	    }
	    return 0;
	}
	if(c1==c2) s[0]='1';
	else s[0]='0';
	if(s1[0]==s2[0] && s1[1]==s2[1]) s[1]='1';
	else s[1]='0';
	if((s1[2]==s2[2] || pd1(s1[2],s2[2]) && (s1[0]==s2[0] && s1[1]==s2[1]))) s[2]='1';
	else s[2]='0';s[3]='0';
	for(int i=0;i<4;i++) cout<<s[i];
	fclose(stdin);fclose(stdout);
	return 0;
}