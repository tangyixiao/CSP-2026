#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	string A1,B1,C1,A2,B2,C2;
	A1=s1[0];
	B1=s1[1];
	C1=s1[2];
	
    A2=s2[0];
	B2=s2[1];
	C2=s2[2];
	string A,B,C,D,F;
	A='A';
	B='B';
	C='C';
	D='D';
	F='F';
	if(c1==c2){
		ans+='1';
		
		if(A1+B1==A2+B2){
		ans+='1';//³µÏáÅÅ
		if(C1<D&&C2<D||C1>C&&C2>C) {
			ans+='1';
			if(C1 == A&&C2 == C||C1 == C&&C2 ==A){
				ans+='0';
			}else ans+='1';
		}else ans+='0';
	}else	ans+='0';
	}else	ans+='0';
	cout<<ans;
	return 0;
}

