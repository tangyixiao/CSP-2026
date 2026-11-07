#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	bool a1=0,a2=0,a3=0,a4=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
		a1=1;
	if(a1==1&&(int(s1[0])-'0')*10+int(s1[1])-'0'==(int(s2[0])-'0')*10+int(s2[1])-'0')
		a2=1;
	if(a2==1)
		if(int(s1[2])<='C'&&int(s2[2])<='C'||int(s1[2])>'C'&&int(s2[2])>'C')
			a3=1;
	if(a3==1)
		if(int(s1[2])-int(s2[2])==1||int(s1[2])-int(s2[2])==-1)	
			a4=1;
	cout<<a1<<' '<<a2<<' '<<a3<<' '<<a4;
	return 0;
} 