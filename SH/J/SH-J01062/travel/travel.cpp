#include<iostream>
#include<string> 
using namespace std;
string c1,s1,c2,s2;
bool mz=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)mz=0;
	printf("%d",c1==c2);
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&mz){
		printf("1");
	}else{
		printf("0");
		mz=0;
	}
	if((((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))||((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F')))&&mz){
		printf("1");
	}else{
		printf("0");
		mz=0;
	}
	if((((s1[2]=='A')&&(s2[2]=='B'))||((s1[2]=='B')&&(s2[2]=='A'))||((s1[2]=='B')&&(s2[2]=='C'))||((s1[2]=='C')&&(s2[2]=='B'))||((s1[2]=='D')&&(s2[2]=='F'))||((s1[2]=='F')&&(s2[2]=='D')))&&mz){
		printf("1");
	}else{
		printf("0");
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
