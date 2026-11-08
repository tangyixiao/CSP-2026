#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,ar;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	ar+=(c1==c2?'1':'0');
	if(ar[0]=='1'&&s1[0]==s2[0]&&s1[1]==s2[1])ar+='1';
	else ar+='0';
	if(ar[1]=='1'){
		if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')ar+='1';
		else if(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F')ar+='1';
		else ar+='0';
	}
	else ar+='0'; 
	if(ar[2]=='1'){
		if(s1[2]+1==s2[2]&&s1[2]!='C')ar+='1';
		else if(s2[2]-1==s1[2]&&s2[2]!='D')ar+='1';
		else ar+='0';
	}
	else ar+='0';
	cout<<ar;
	return 0;
}
