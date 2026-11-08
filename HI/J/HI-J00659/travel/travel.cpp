#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string c1,c2,ans;
char s1[5],s2[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1;scanf("%s",s1);
	cin>>c2;scanf("%s",s2);
	
	if(c1 == c2) 
	{
		ans=ans+'1';
		if(s1[0]==s2[0] && s1[1]==s2[1]) 
		{
			ans+='1';
			if((s1[2]=='A'||s1[2]=='B'||s1[2]=='C') && (s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))
				ans+='1';
			else if((s1[2]=='D'||s1[2]=='F') && (s2[2]=='D'||s2[2]=='F'))
				ans+='1';
			else ans=ans+'0';
			
			if((int)s1[2] == (int)s2[2]+1 && s1[2]!='D') ans+='1';
			else if((int)s1[2] == (int)s2[2]-1 && s2[2]!='D') ans+='1';
			else if((int)s1[2] == (int)s2[2]-2 && s2[2]=='F') ans+='1';
			else if((int)s2[2] == (int)s1[2]-2 && s1[2]=='F') ans+='1';
			else ans=ans+'0';
		}
		else ans=ans+'0'+'0'+'0';
	}
	else  ans=ans+'0'+'0'+'0'+'0';
	
	cout<<ans;
	return 0;
}
