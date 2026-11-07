#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int cnt1=0,cnt2=0;
bool q1(string s,string c){
	for(int r=0;r<3;r++)
	{
		if(s[r]!=c[r])
		return false;
	}
	return true;
}
bool q2(char s[],char c[]){
	for(int r=0;r<3;r++)
	{
		if(s[r]!=c[r])
		return false;
	}
	return true;
}
bool q3(char s,char c,int &cnt1){
	if(s=='A'||s=='B'||s=='C')
		cnt1++;
	if(c=='A'||c=='B'||c=='C')
		cnt1++;
	if(s==c)
		return false;
	if(cnt1==2)
		return true;
	else 
		return false;
}
bool q4(char s,char c,int &cnt2){
	if(s=='D'||s=='F')
		cnt2++;
	if(c=='D'||c=='F')
		cnt2++;
	if(cnt2==2)
		return true;
	return false;
}
bool q5(char s,char c){
	if(s=='B'&&(c=='A'||c=='C')){
		return true;
	}else if(c=='B'&&(s=='A'||s=='C')){
		return true;
	}else if(s=='D'&&c=='F'){
		return true;
	}else if(c=='D'&&s=='F'){
		return true;
	}else
		return false;
}
string c1,s1,c2,s2;
char temp1[5],temp2[5],temp3,temp4;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	
	for(int i=0;i<2;i++){
		temp1[i]=s1[i];
		temp2[i]=s2[i];
	}
	temp3=s1[2];
	temp4=s2[2];
	if(q1(c1,c2)){
		cout<<"1";
		if(q2(temp1,temp2)){
		cout<<"1";
			if(q3(temp3,temp4,cnt1)||q4(temp3,temp4,cnt2)){
				cout<<"1";
				if(q5(temp3,temp4))
					cout<<"1";
				else
					cout<<"0";
			}
			else
				cout<<"00";
		}
		else{
			cout<<"000";
		}
	}
	else
	  	cout<<"0000";
	return 0;
}
