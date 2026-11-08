#include <bits/stdc++.h>
using namespace std;
string sa,sb,ca,cb;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>sa>>sb>>ca>>cb;
	if(sa==ca)cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	if(sb[0]==cb[0]&&sb[1]==cb[1])cout<<1;
	else{
		cout<<"000";
		return 0; 
	}
	if(sb[2]/4==cb[2]/4)cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if(abs(sb[2]-cb[2])==1)cout<<1;
	else cout<<0; 
    return 0;
}

