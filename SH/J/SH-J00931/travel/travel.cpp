#include<bits/stdc++.h>
using namespace std;
int c,x;
string cs,xs;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>cs>>x>>xs;
	bool f=1;
	bool fl=1;
	bool fla=1;
	if(c==x){
		cout<<1;
	}
	else{
		f=0;
		cout<<0;
	}
	if(cs[0]==xs[0] && cs[1]==xs[1] && f==1){
		cout<<1;
	}
	else{
		fl=0;
		cout<<0;
	}
	if(((cs[2]=='D' && xs[2]=='C') || (cs[2]=='C' && xs[2]=='D')) || fl==0){
		fla=0;
		cout<<0;
	}
	else{
		cout<<1;
	}
	if((cs[2]+1==xs[2] || xs[2]+1==cs[2]) && fla==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
