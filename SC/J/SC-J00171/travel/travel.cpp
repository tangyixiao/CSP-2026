#include<iostream>
#include<string>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	char e,f;
	e=b[2];
	f=d[2];
	bool flag=0,fl=0,fa=0;
	
	if(a==c){
		cout<<1;
		fl=1;
	}else{
		cout<<0;
	}
	if(fl&&b[0]==d[0]&&b[1]==d[1]){
		cout<<1;
		fa=1;
	}else{
		cout<<0;
	}
	if(fa&&fl&&((e>='A'&&e<='C'&&f>='A'&&f<='C')||(e>='D'&&e<='F'&&f>='D'&&f<='F'))){
		cout<<1;
		flag=1;
	}else{
		cout<<0;
	}
	if((e==f+1||f==e+1)&&flag&&fl&&fa){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
	fclose(stdin);
	fclose(stdout);
}