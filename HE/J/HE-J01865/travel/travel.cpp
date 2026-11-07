//Trick||Treat!
//我感觉我这道做的好帅 
#include<bits/stdc++.h>
using namespace std;
string c,s1,c1,s;
bool f[4];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>c1>>s1;
	if(s!=s1){
	for(int i=0;i<4;i++){
		if(c==c1){
			f[0]=1;
	if(s[0]==s1[0]&&s[1]==s1[1]){
	f[1]=1;
	}
	if(s[1]==s1[1]&&(s[2]=='A'||s[2]=='B')&&(s1[2]=='A'||s1[2]=='B')||(s[2]=='B'||s[2]=='C')&&(s1[2]=='B'||s1[2]=='C')||(s[2]=='D'||s[2]=='F')&&(s1[2]=='D'||s1[2]=='F')||((s[2]=='C'||s[2]=='A')&&(s1[2]=='C'||s1[2]=='A'))){
					f[2]=1;					
				}
				if(s[1]==s1[1]&&(s[2]=='A'||s[2]=='B')&&(s1[2]=='A'||s1[2]=='B')||(s[2]=='B'||s[2]=='C')&&(s1[2]=='B'||s1[2]=='C')||(s[2]=='D'||s[2]=='F')&&(s1[2]=='D'||s1[2]=='F')){
					f[3]=1;
				}
		}
	}
}
		for(int i=0;i<4;i++){
			cout<<f[i]; 
		}
//				if(s[0]==s1[0]&&s[1]==s[1]){
//				f[1]=1;
//				cout<<f[i];
//				if((s[2]=='A'&&s1[2]=='B')||(s[2]=='B'&&s1[2]=='C')||(s[2]=='D'||s1[2]=='F')){
//					f[2]=1;
//					cout<<f[i];
//				}
//			}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
