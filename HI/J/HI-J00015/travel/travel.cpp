#include<bits/stdc++.h> 
using namespace std;
bool paix(char a,char b){
	int m=abs((a-'A')-(b-'A'));
	if(m<=1)return 1;
	return 0;
}
bool fenl(char a,char b){
	int f1,f2;
	if(a>='A'&&a<='C')f1=1;
	else f1=0;
	if(b>='A'&&b<='C')f2=1;
	else f2=0;
	return f1==f2?1:0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,cnt,b1,b2,b3,b4;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cnt+='1';
		if(s1[0]==s2[0]&&s1[1]==s2[1])cnt+='1';
		if(!(s1[0]==s2[0]&&s1[1]==s2[1]))cnt+='0';
		if(s1[0]==s2[0]&&s1[1]==s2[1]&&fenl(s1[2],s2[2]))cnt+='1';
		if(!(s1[0]==s2[0]&&s1[1]==s2[1]&&fenl(s1[2],s2[2])))cnt+='0';
		if(s1[0]==s2[0]&&s1[1]==s2[1]&&fenl(s1[2],s2[2])&&paix(s1[2],s2[2]))cnt+='1';
		else cnt+='0';
	} else cnt+="0000";
	
	cout<<cnt;
	return 0;
} 
