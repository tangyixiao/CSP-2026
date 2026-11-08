#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
string a,b,c,d;
int l=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	char sb=b[2],sd=b[2];
	if(a==c){
		cout<<1;
		l=1;
	}
	else cout<<0;
	
	
	if(b[0]==d[0]&&b[1]==d[1]&&l==1){
		cout<<1;
		l=2;
	}
	else cout<<0;
	
	if(sb<='C'&&sb>='A'&&sd<='C'&&sd>='A'&&l==2){
		cout<<1;
		l=3;
	}
	else if((sb=='D'||sb=='F')&&(sd=='D'||sd=='F')&&l==2){
		cout<<1;
		l=3;
	}
	else cout<<0;
	
	
	if(l==3){
		if(sb<='C'&&sb>='A'&&sd<='C'&&sd>='A'&&((int)sb+1==(int)sd||(int)sd+1==(int)sb)){
			cout<<1<<endl;
		}
		else if((sb=='D'&&sd=='F')||(sb=='F'&&sd=='D')){
			cout<<1<<endl;
		}
		else cout<<0<<endl;
	}
	else cout<<0<<endl; 
	
	
	return 0;
} 
