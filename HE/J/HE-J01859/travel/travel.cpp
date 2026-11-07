#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;
	char x,y;
	int a,b,a1,b1;
	cin>>s1>>s2>>s3>>s4;
	x=s2[2];
	y=s4[2];
	if(s1[0]=='0'){
		a=s1[1]-'0';
	}
	else{
		a=10+(s1[1]-'0');
	}
	if(s3[0]=='0'){
		b=s3[1]-'0';
	}
	else{
		b=10+(s3[1]-'0');
	}
	if(s2[0]=='0'){
		a1=s2[1]-'0';
	}
	else{
		a1=10+(s2[1]-'0');
	}
	if(s4[0]=='0'){
		b1=s4[1]-'0';
	}
	else{
		b1=10+(s4[1]-'0');
	}
	if(a!=b){
		cout<<"0000";
		return 0;
	}
	else{
		cout<<"1";
		if(a1!=b1){
			cout<<"000";
			return 0; 
		}
		else{
			cout<<"1";
			if(x=='A'||x=='B'||x=='C'){
				if(y<='C'){
					cout<<"1";
					if(x=='B'||y=='B'){
						cout<<"1";
						return 0;
					}
					else{
						cout<<"0";
						return 0;
					}
				}
				else{
					cout<<"00";
					return 0;
				}
			}
			else{
				if(y>='D'){
					cout<<"11";
					return 0;
				}
				else{
					cout<<"00";
					return 0;
				}
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
