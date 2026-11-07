#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	else cout<<1;
	
	int a=10*(s1[0]-'0')+(s1[1]-'0');
	int b=10*(s2[0]-'0')+(s2[1]-'0');
	if(a!=b){
	 cout<<"000";
	 return 0;
	}
	else cout<<1;
	char A=s1[2];
	char B=s2[2];
	if((A=='A'&&B=='D')||(A=='B'&&B=='D')||
	(A=='C'&&B=='D')||(A=='A'&&B=='F')||(A=='B'&&B=='F')||
	(A=='C'&&B=='F')||(A=='D'&&B=='A')||(A=='D'&&B=='B')||
	(A=='D'&&B=='C')||(A=='F'&&B=='A')||(A=='F'&&B=='B')||
	(A=='F'&&B=='C')){
		cout<<"00";
		return 0;
	}else cout<<1;
	if(abs(int(A)-int(B))==1||(A=='D'&&B=='F')
	||(A=='F'&&B=='D')) cout<<1;
	else cout<<0;
	return 0;
}
