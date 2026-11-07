#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2,p1,p2;
char st1,st2;
bool a1,a2,a3,a4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)a1=1;
	for(int i=0;i<=1;i++){
		char t=s1[i];
		p1+=t;
		char t1=s2[i];
		p2+=t1;
	} 
	if(p1==p2&&a1)a2=1;
	st1=s1[2];st2=s2[2];
	if(st1<='C'&&st2<='C'&&a2)a3=1;
	if(st1>='D'&&st2>='D'&&a2)a3=1;
	if(abs(st1-st2)==1&&a3==1)a4=1;
	cout<<a1<<a2<<a3<<a4;
	return 0;
}
