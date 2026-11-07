#include <bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
bool a1,a2,a3,a4;
int a,b,c,d;
char x1,x2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a=((c1[0]-'0')*10+(c1[1]-'0'));
	b=((c2[0]-'0')*10+(c2[1]-'0'));
	c=((s1[0]-'0')*10+(s1[1]-'0'));
	d=((s2[0]-'0')*10+(s2[1]-'0'));
	if(a==b){
		cout<<1;
		a1=1;
	}
	else cout<<0;
	if(a1==1&&c==d){
		cout<<1;
		a2=1;
	}
	else cout<<0;
	x1=s1[2],x2=s2[2];
	if(a1&&a2&&((x1>='A'&&x1<='C'&&x2>='A'&&x2<='C')||(x1>='D'&&x1<='F'&&x2>='D'&&x2<='F'))){
		cout<<1;
		a3=1;
	}
	else cout<<0;
	if(a1&&a2&&a3&&abs((x1-'0')-(x2-'0'))==1){
		cout<<1; 
	} 
	else cout<<0;
	return 0;
}
