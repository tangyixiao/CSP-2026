#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2; 
bool b[4];
void F(){
	cout<<b[0]<<b[1]<<b[2]<<b[3];
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(s1[2]=='F') s1[2]='E';
	if(s2[2]=='F') s2[2]='E';
	if(c1==c2){
		b[0]=1;
	}
	else{
		F();
		return 0;
	}
	string sa="",sb="";
	sa=s1[0]+s1[1];
	sb=s2[0]+s2[1];
	if(sa==sb){
		b[1]=1;
	}
	else {
		F();
		return 0;
	}
	if(s1[2]<='C'&&s2[2]<='C'||s1[2]>'C'&&s2[2]>'C'){
		b[2]=1;
	}
	else{
		F();
		return 0;
	}
	if(abs(s1[2]-s2[2])==1){
		b[3]=1;
	}
	F();
	return 0;
}

