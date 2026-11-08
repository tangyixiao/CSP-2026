#include <bits/stdc++.h>
using namespace std; 
const int N=1e7+1;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);	
	cin>>a>>b>>c>>d;
	if(b[2]=='F')b[2]='E';
	if(d[2]=='F')d[2]='E';
	int f1=0,f2=1,f3=0,f4=0;
	if(a==c)f1=1;
	for(int i=0;i<2;i++){
		if(b[i]!=d[i])f2=0;
	}
	if(!(f1))f2=0;
	if(((b[2]<='C' && d[2]<='C')||(b[2]>='D' && d[2]>='D'))&&f1&&f2)f3=1;
	if((int(b[2])==int(d[2]+1)||int(b[2])==int(d[2]-1))&&f1&&f2&&f3){
		if(!((b[2]=='C' && d[2]=='D' )|| (b[2]=='D' && d[2]=='C')))f4=1;
	}
	if(f1)cout<<1;
	else cout<<0;
	if(f2)cout<<1;
	else cout<<0;
	if(f3)cout<<1;
	else cout<<0;
	if(f4)cout<<1;
	else cout<<0;
	return 0;
}
