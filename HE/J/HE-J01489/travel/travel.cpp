#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r,x;
	int rr,xx;
	cin>>rr>>r>>xx>>x;
	if(rr==xx){
		cout<<1;
	}else{
		cout<<0;
	}if((r[1]==x[1]&&r[0]==x[0])&&rr==xx){
		cout<<1;
	}else{
		cout<<0;
	}if(((r[1]==x[1]&&r[0]==x[0])&&(r[2]<='C'&&x[2]<='C')||(r[2]>'C'&&x[2]>'C'))&&rr==xx){
		cout<<1;
	}else{
		cout<<0;
	}if((((r[1]==x[1]&&r[0]==x[0])&&(r[2]<='C'&&x[2]<='C')||(r[2]>'C'&&x[2]>'C'))&&rr==xx)&&(r[2]==x[2]+1||r[2]==x[2]-1)){
		cout<<1;		
	}else{
		cout<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0; 
} 
