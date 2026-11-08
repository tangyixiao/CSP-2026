#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	bool f1,f2,f3,f4;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		f1=1;
	}
	else{
		f1=0;
	}
	if(f1&&s1[0]==s2[0]&&s1[1]==s2[1]){
		f2=1;
	}
	else{
		f2=0;
	}
	if(f2&&(((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))||((s1[2]=='D'||s1[2]=='E')&&(s2[2]=='D'||s2[2]=='E')))){
		f3=1;
	}
	else{
		f3=0;
	}
	if((s1[2]=='A'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='C')){
		f4=0;
	}
	else if(f3){
		f4=1;
	}
	else{
		f4=0;
	}
	cout<<(int)f1<<(int)f2<<(int)f3<<(int)f4<<endl;
	return 0;
}
