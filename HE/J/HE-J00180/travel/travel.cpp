#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool boo=false,bo=false;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(s1[0]==s2[0] && s1[1]==s2[1]){
		cout<<1;
		bo=true;
	}
	else cout<<0;
	if(!bo){
		cout<<0<<0;
		return 0;
	}
	if(s1[2]<='C'){
		if(s2[2]<='C'){
			cout<<1;
			boo=true;
		}
		else cout<<0;
	}
	else if(s1[2]>'C' && s1[2]<='F'){
		if(s2[2]>'C' && s2[2]<='F'){
			cout<<1;
			boo=true;
		}
		else cout<<0;
	}
	if(s1[2]=='F') s1[2]='E';
	if(s2[2]=='F') s2[2]='E';
	if(abs(s1[2]-s2[2])==1 && boo) cout<<1;
	else cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
