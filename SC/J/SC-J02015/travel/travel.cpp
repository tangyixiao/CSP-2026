#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d,k="";
	cin>>a>>b>>c>>d;
	int f=0;
	if(a==c && f==0){
		k+="1";
	}
	else {
		k+="0";
		f=1;
	}
	if(b[0]==d[0] && b[1]==d[1] && f==0){
		k+="1";
	}
	else{
		k+="0";
		f=1;
	}
	if(f==0){
		if('A'<=b[2] && b[2]<='C' && 'A'<=d[2] && d[2]<='C'){
			k+="1";
		}
		else if((b[2]=='D' || b[2]=='F') && (d[2]=='D' || d[2]=='F')){
			k+="1";
		}
		else{
			f=1;
			k+="0";
		}
	}
	else{
		k+="0";
	}
	if((b[2]=='D' || b[2]=='F')&& (d[2]=='D' || d[2]=='F') && f==0){
			k+="1";
		}
	else if('A'<=b[2] && b[2]<='C' && 'A'<=d[2] && d[2]<='C' && abs(b[2]-d[2])==1 && f==0){
		k+="1";
	}
	else{
			f=1;
			k+="0";
		}
		cout<<k;
	return 0;
}
