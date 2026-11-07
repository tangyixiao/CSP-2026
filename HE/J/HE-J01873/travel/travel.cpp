#include<bits/stdc++.h>
using namespace std;
string s,c;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string str;
	int a=0;
	for(int i=0;i<4;i++){
		cin>>str;
		s+=str;
	}
		if(s[0]==s[5]&&s[1]==s[6]){
			c[0]='1';
				if(s[2]==s[7]&&s[3]==s[8]){
					c[1]='1';
					if(s[4]<='C'&&s[9]<='C'){
						c[2]='1';
						int a=s[4]-'0';
						int b=s[9]-'0';
						if(a-b==1){
							c[3]='1';
						}else if(b-a==1){
							c[3]='1';
						}else{
							c[3]='0'; 
						}
					}else if(s[4]>='D'&&s[9]>='D'){
						c[2]='1';
						int a=s[4]-'0';
						int b=s[9]-'0';
						if(a-b==1){
							c[3]='1';
						}else if(b-a==1){
							c[3]='1';
						}else{
							c[3]='0';
						}
				}else{
					c[2]='0';
					c[3]='0';
				}
			}else{
			 c[1]='0';
			 c[2]='0';
			 c[3]='0';
			}
		}else{
			c[0]='0';
			c[1]='0';
			c[2]='0';
			c[3]='0';
		}
	for(int i=0;i<4;i++){
		cout<<c[i];
	}
	return 0;
}
