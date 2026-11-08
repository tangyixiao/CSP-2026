#include<bits/stdc++.h>
using namespace std;
int c1,c2,l1,l2;
string s1,s2;
char p1,p2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<'1';
	l1=(s1[0]-'0')*10+(s1[1]-'0');
	l2=(s2[0]-'0')*10+(s2[1]-'0');
	if(l1!=l2){
		cout<<"000";
		return 0;
	}
	cout<<'1';
	p1=s1[2];
	p2=s2[2];
	if(p1=='F') p1='E';
	if(p2=='F') p2='E';
	if(((p1>='A' && p1<='C')&&(p2>='A' && p2<='C'))||((p1=='D' || p1=='E')&&(p1=='D' || p1=='E'))){
		cout<<'1';
		if(abs(p1-p2)==1) cout<<'1';
		else cout<<'0';
	}else cout<<"00";
	//cout<<p1<<' '<<p2;
	
	return 0;
} 
