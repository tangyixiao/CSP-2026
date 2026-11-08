#include<bits/stdc++.h>
using namespace std;

int sa,sb;
string ca,cb;


int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>sa>>sb>>ca>>cb;
	int cc=ca[0]*10+ca[1],cd=cb[0]*10+cb[1];
	
	if(sa==sb&&sa!=01&&sb!=01&&sa!=16&&sb!=16){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(cc==cd&&1<=cc<=18&&1<=cd<=18){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(ca[2]==cb[2]){
		cout<<0<<0;
	}
	else{
		if((ca[2]<='C'&&cb[2]<='C')||(ca[2]>='D'&&cb[2]>='D')&&(ca[2]!='E'&&cb[2]!='E')){
			cout<<1;
		}
		else{
			cout<<0;
		}
		if(ca[2]<='C'&&cb[3]<='C'){
			if(ca[2]+1==cb[2] || ca[2]-1==cb[2]){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
		else{
			cout<<0;
		}
	}
	
	
	return 0;
}
