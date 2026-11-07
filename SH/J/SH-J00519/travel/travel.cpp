#include<bits/stdc++.h>
using namespace std;
string c,s,cc,ss;
int a,b,ccc,d,e,f,n,m;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>cc>>ss;
	n=int('0');
	m=int('A')-1;
	a=10*(int(c[0])-n)+int(c[1])-n;
	b=10*(int(s[0])-n)+int(s[1])-n;
	ccc=int(s[2])-m;
	d=10*(int(cc[0])-n)+int(cc[1])-n;
	e=10*(int(ss[0])-n)+int(ss[1])-n;
	f=int(ss[2])-m;
	if(a!=d){
		cout<<"0000";
	}
	else if(b!=e){
		cout<<"1000";
	}
	else if((1<=ccc&&ccc<=3&&4<=f&&f<=5)||(1<=f&&f<=3&&4<=ccc&&ccc<=5)){
		cout<<"1100";
	}
	else if((ccc==1&&f==3)||(ccc==3&&f==1)){
		cout<<"1110";
	}
	else{
		cout<<"1111";
	}
	
	return 0;
}
