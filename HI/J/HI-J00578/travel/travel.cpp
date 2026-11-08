#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(b[0]==d[0]&&b[1]==d[1]){
	//	cout<<2;
	cout<<1;
	}else{
		cout<<0<<0<<0;
		return 0;
	}
	if((b[2]=='A'||b[2]=='B'||b[2]=='C')&&(d[2]=='A'||d[2]=='B'||d[2]=='C')){
		//cout<<3;
		cout<<1;
		if((b[2]=='A'||b[2]=='C')&&(d[2]=='A'||d[2]=='C')){
			cout<<0;
			//cout<<1;
			return 0;
		}else{
			//cout<<b[2]<<" "<<d[2];
			//cout<<4;
		//	cout<<(b[2]=='A'||b[2]=='C')&&(d[2]=='A'||b[2]=='C');
			cout<<1;
		}
		
	}else if((b[2]=='D'||b[2]=='F')&&(d[2]=='D'||d[2]=='F')){
		//cout<<3<<4; 
		cout<<1<<1;
	}else{
		cout<<0<<0;
	}
	
return 0;	
}
