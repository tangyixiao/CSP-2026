#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int s_1,s_2;
int que_1(){
	if(c1==c2) return 1;
	else return 0;
}

int que_2(){
	if(que_1() && s_1==s_2) return 1;
	else return 0;
}

int s_a(){
	if((s1[2]>='A' && s1[2]<='C') && (s2[2]>='A' && s2[2]<='C')) return 1;
	else if((s1[2]=='D' || s1[2]=='F') && (s2[2]=='D' || s2[2]=='F')) return 1;
	else return 0;
}

int que_3(){
	if(que_2() && s_a()) return 1;
	else return 0;
}

int que_4(){
	if(que_3() && abs(int(s1[2])-int(s2[2]))==1) return 1;
	else return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//-------------------------------------
	cin>>c1>>s1>>c2>>s2;
	s_1=int(s1[0]-'0')*10+int(s1[1]-'0');
	s_2=int(s2[0]-'0')*10+int(s2[1]-'0');
	
	string ss;
	if(que_1()) ss+='1';
	else ss+='0';
	if(que_2()) ss+='1';
	else ss+='0';
	if(que_3()) ss+='1';
	else ss+='0';
	if(que_4()) ss+='1';
	else ss+='0';
	cout<<ss;
	//-------------------------------------
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
