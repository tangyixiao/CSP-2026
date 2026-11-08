#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,c;
	string b,d;
	cin>>a>>b>>c>>d;
	string k="0000";
	if(a==c){
		k="";
		k+='1';		
	}
	else{
		cout<<k;
		return 0;
	}
	if(b[0]+b[1]==d[0]+d[1]) k+='1';
	else{
		cout<<k+'0'+'0'+'0';
		return 0;
	}
	if((b[2]=='A'||b[2]=='B'||b[2]=='C')&&(d[2]=='A'||d[2]=='B'||d[2]=='C')){
		k+='1';
	}
	else if((b[2]=='D'||b[2]=='F')&&(d[2]=='D'||d[2]=='F')){
		k=k+'1'+'1';
		cout<<k;
		return 0;
	}
	else{
		cout<<k+'0'+'0';
		return 0;
	}	
	
if((b[2]=='A'&&d[2]=='B')||(b[2]=='B'&&d[2]=='A')||(b[2]=='B'&&d[2]=='C')||(b[2]=='C'&&d[2]=='B')){
	k+='1';
}
else k+='0';
cout<<k;
		

	return 0;
}
