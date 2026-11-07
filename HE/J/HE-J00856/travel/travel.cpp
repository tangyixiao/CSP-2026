#include <bits/stdc++.h>
using namespace std;
const long long N=1e3+10;
char s1[N];
char c1[N];
char s2[N];
char c2[N];
char e,f,g,h;
string s;
int mian(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a=0;
	int b=0;
	for (int i=0;i<2;i++){
		cin>>s1[i];
	}
	for (int i=0;i<3;i++){
		cin>>c1[i];
	}
	for (int i=0;i<2;i++){
		cin>>s2[i];
	}
	for (int i=0;i<3;i++){
		cin>>c2[i];
	}
	if(c1[1]+c2[1]=='D'+'F')
	{
		b=1;
	}
	if(s1[1]+s1[2]==s2[1]+s2[2])
	{
		e='1';
	}
	else{
		e='0';
	}
		if(c1[2]+c1[3]==c2[2]+c2[3])
	{
		a=1;
		f='1';
	}
	else{
		f='0';
	}
			if(c1[1]+c2[1]<='A'+'C'||b==1&&a==1)
	{
		a=2;
		g='1';
	}
	else{
		g='0';
	}
			if(b==1||c1[1]+c2[2]!='A'+'C')
	{
		h='1';
	}
	else{
		h='0';
	}
//	char a=e*1000+f*100+g*10+h;
	s=e,f,g,h;
	cout <<s<<endl;
	
	
	
	
	return 0;
	
}
