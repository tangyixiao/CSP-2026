#include<bits/stdc++.h>
using namespace std;
string a1,a2,m1,m2;
int b[4]={0,0,0,0};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>m1>>a2>>m2;
	char m1a=m1[0],m1b=m1[1],m1c=m1[2],m2a=m2[0],m2b=m2[1],m2c=m2[2];
	if(a1==a2){
		b[0]=1;
	}
	if(m1a==m2a&&m1b==m2b){
		b[1]=1;
	}
	if((m1c=='D'||m1[2]=='F')&&(m2c=='D'||m2[2]=='F')){
		b[2]=1;
	}else if((m1c=='A'||m1c=='B'||m1c=='C')&&(m2c=='A'||m2c=='B'||m2c=='C')){
		b[2]=1;
	}
	if(b[0]==1&&b[1]==1&&b[2]==1){
		if(int(m1c)-int(m2c)==1||int(m1c)-int(m2c)==-1){
			b[3]=1;
		}
	}
	cout<<b[0]<<b[1]<<b[2]<<b[3];
	return 0;
} 
