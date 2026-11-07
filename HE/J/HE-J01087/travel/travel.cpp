#include<iostream>
using namespace std; 
string ra,rb,xa,xb;
char x,y;

int main(){
	freopen("travel.in","r",stdin); 
	freopen("travel.out","w",stdout);
	cin>>ra>>rb>>xa>>xb;
	if(ra!=xa)cout<<"0000";
	else{
		cout<<1;
		if(rb[0]!=xb[0]||rb[1]!=xb[1])cout<<"000";
		else{
			cout<<1;
			if(rb[2]>='A'&&rb[2]<='C')x=1;
			else x=0;
			if(xb[2]>='A'&&xb[2]<='C')y=1;
			else y=0;
			if(x!=y)cout<<"00";
			else if(x==0&&y==0)cout<<"11";
			else{
				cout<<1;
				if(rb[2]+1==xb[2]||rb[2]-1==xb[2])cout<<1;
				else cout<<0;
			}			
		}
	}
	return 0;
}
