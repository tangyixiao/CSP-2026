#include<bits/stdc++.h>
using namespace std;
string a,b,c,d; 
string s;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		s+='1';
	}else{
		cout<<"0000";
		return 0;
	}
	string e,f;
	e+=b[0];
	e+=b[1];
	f+=d[0];
	f+=d[1];
	if(e==f){
		s+='1';
	}else{
		cout<<s<<"000";
		return 0;
	}
	int h=0;
	char m,n;
	m=b[2];
	n=d[2];
	if(m<='C'&&n<='C'){
		s+='1';
		h++;
	}
	if(m>'C'&&n>'C'){
		s+='1';
		h++;
	}
	if(h==0){
		cout<<s<<"00";
		return 0;
	}
	int x=0;
	if(abs((int)m-(int)n)==1){
		s+='1';
	}else if(m=='D'&&n=='F'){
		s+='1';
	}else if(n=='D'&&m=='F'){
		s+='1';
	}else s+='0';
	cout<<s;
	fclose(stdin);fclose(stdout);
	return 0;
} 