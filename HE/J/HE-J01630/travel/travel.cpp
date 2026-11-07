#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,c1,c2;
	bool a1=0,a2=0,a3=0,a4=0;
	cin>>c1>>s1>>c2>>s2;
	int st1=0,st2=0;
	st1=s1[0]-'0';
	st2=s2[0]-'0';
	st1=st1*10+s1[1]-'0';
	st2=st2*10+s2[1]-'0';
	char z1=s1[2],z2=s2[2];
	int t1,t2;
	if(z1>='A'&&z1<='C') t1=0;
	else t1=1;
	if(z2>='A'&&z2<='C') t2=0;
	else t2=1;
	if(c1==c2) a1=1; 
	if(a1){
		if(st1==st2) a2=1;
		if(a2) if(t1==t2) a3=1;
		if(a3) if(z1==z2-1||z1==z2+1||z1-1==z2||z1+1==z2) a4=1;
	}
	//cout<<c1<<" "<<st1<<z1<<" "<<c2<<" "<<st2<<z2<<'\n';
	cout<<a1<<a2<<a3<<a4;
	return 0;
} 
